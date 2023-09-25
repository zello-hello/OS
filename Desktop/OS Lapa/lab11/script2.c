#include <stdio.h>
#include <stdlib.h>

int main ()

{
int o;
scanf ("%d", &o);
if (o < 0) {
exit(1);
} else if (o > 0) {
exit(3);
}
exit(2);
}
