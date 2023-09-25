#include "common.h"
void display() {
	printf("\n Server timeout...%u seconds passed!\n Total elapsesed time is 30 seconds!\n",clock());
}
int main()
{
	clock_t start, now;
	start = time(NULL);
	int readfd;
	int n;
	char buff[MAX_BUFF];
	printf("Hell server...\n\n");
	if(mknod(FIFO_NAME, S_IFIFO | 0666, 0) < 0)
	{
		fprintf(stderr, "%s: Unable to create FiFO(%s)\n", __FILE__, strerror(errno));
		exit(-1);
	}
	
	if((readfd = open(FIFO_NAME, O_RDONLY)) < 0)
	{
		fprintf(stderr, "%s: Unable to open FIFO (%s)\n", __FILE__, strerror(errno));
		exit(-2);
	}

	for(;;)
	{
		while((n = read(readfd, buff, MAX_BUFF)) > 0)
		{
			if(write(1, buff, n) != n)
			{
				fprintf(stderr, "%s: Input error (%s)\n", __FILE__, strerror(errno));
			}
			sleep(5);
		}
	now=time(NULL);
	if (now-start>30)
	{
		display();
		return 0;
	}
	}
close(readfd); 
if(unlink(FIFO_NAME) < 0)
{
fprintf(stderr, "%s: unable to delete FIFO (%s)\n", __FILE__, strerror(errno)); 
exit(-4);
}
exit(0);
}

