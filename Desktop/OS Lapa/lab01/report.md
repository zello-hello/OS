---
# Front matter
lang: ru-RU
title: "Отчёт по лабораторной работе №1"
subtitle: "Развертывание виртуальной машины"
author: "Лапасов Зелимхан НБИбд 01-20"

# Formatting
toc-title: "Содержание"
toc: true # Table of contents
toc_depth: 2
lof: true # List of figures
fontsize: 12pt
linestretch: 1.5
papersize: a4paper
documentclass: scrreprt
polyglossia-lang: russian
polyglossia-otherlangs: english
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase
indent: true
pdf-engine: lualatex
header-includes:
  - \linepenalty=10 # the penalty added to the badness of each line within a paragraph (no associated penalty node) Increasing the value makes tex try to have fewer lines in the paragraph.
  - \interlinepenalty=0 # value of the penalty (node) added after each line of a paragraph.
  - \hyphenpenalty=50 # the penalty for line breaking at an automatically inserted hyphen
  - \exhyphenpenalty=50 # the penalty for line breaking at an explicit hyphen
  - \binoppenalty=700 # the penalty for breaking a line at a binary operator
  - \relpenalty=500 # the penalty for breaking a line at a relation
  - \clubpenalty=150 # extra penalty for breaking after first line of a paragraph
  - \widowpenalty=150 # extra penalty for breaking before last line of a paragraph
  - \displaywidowpenalty=50 # extra penalty for breaking before last line before a display math
  - \brokenpenalty=100 # extra penalty for page breaking after a hyphenated line
  - \predisplaypenalty=10000 # penalty for breaking before a display
  - \postdisplaypenalty=0 # penalty for breaking after a display
  - \floatingpenalty = 20000 # penalty for splitting an insertion (can only be split footnote in standard LaTeX)
  - \raggedbottom # or \flushbottom
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Целью данной работы является приобретение практических навыков установки операционной системы на виртуальную машину, настройки минимально необходимых для дальнейшей работы сервисов

# Выполнение лабораторной работы

Создаю виртуальную машину

![Создание новой виртуальной машины](image/01.png){ #fig:001 width=70% height=70% }

Задаю конфигурацию жёсткого диска — VDI, динамический виртуальный диск.

![Конфигурация жёсткого диска](image/02.png){ #fig:002 width=70% height=70% }

![Конфигурация жёсткого диска](image/03.png){ #fig:003 width=70% height=70% }

![Конфигурация жёсткого диска](image/04.png){ #fig:004 width=70% height=70% }

![Конфигурация жёсткого диска](image/05.png){ #fig:005 width=70% height=70% }

Добавляю новый привод оптических дисков и выбираю образ

![Конфигурация системы](image/06.png){ #fig:006 width=70% height=70% }

Запускаю виртуальную машину и выбираю установку системы на жёсткий диск.
Устанавливаю язык для интерфейса и раскладки клавиатуры

![Установка языка](image/07.png){ #fig:007 width=70% height=70% }

![Установка языка](image/08.png){ #fig:008 width=70% height=70% }

Указываю параметры установки

![Установка разбиения диска](image/09.png){ #fig:009 width=70% height=70% }

![Установка часового пояса](image/10.png){ #fig:010 width=70% height=70% }

Создаю первого пользователя

![Создание пользователя](image/11.png){ #fig:011 width=70% height=70% }

Перехожу к этапу установки и дожидаюсь его завершения.

![Этап установки](image/12.png){ #fig:012 width=70% height=70% }

Захожу в созданную учётную запись и произвожу настройку параметров,

![Установка драйверов](image/13.png){ #fig:013 width=70% height=70% }

Информация по машине.

1. Версия ядра Linux (Linux version).

2. Частота процессора (Detected Mhz processor).

3. Модель процессора (CPU0).

![Команда dmesg](image/14.png){ #fig:014 width=70% height=70% }

4. Объем доступной оперативной памяти (Memory available).

5. Тип обнаруженного гипервизора (Hypervisor detected).

![Команда dmesg](image/15.png){ #fig:015 width=70% height=70% }

6. Тип файловой системы корневого раздела.
7. Последовательность монтирования файловых систем

![Команда dmesg](image/16.png){ #fig:016 width=70% height=70% }

# Вывод

Мы приобрели практические навыки установки операционной системы на виртуальную машину, настройки минимально необходимых для дальнейшей работы сервисов.

# Контрольные вопросы

1. Какую информацию содержит учётная запись пользователя?

* входное имя пользователя (Login Name);
* пароль (Password);
* внутренний идентификатор пользователя (User ID);
* идентификатор группы (Group ID);
* анкетные данные пользователя (General Information);
* домашний каталог (Home Dir);
* указатель на программную оболочку (Shell).

2. Укажите команды терминала и приведите примеры:

* для получения справки по команде - man;
* для перемещения по файловой системе - cd;
* для просмотра содержимого каталога - ls;
* для определения объёма каталога - ls -l;
* для создания / удаления каталогов / файлов - touch, mkdir, rm, rmdir;
* для задания определённых прав на файл / каталог - chmod;
* для просмотра истории команд - history.

3. Что такое файловая система? Приведите примеры с краткой характеристикой.

Файловая система (англ. file system) — порядок, определяющий способ организации, хранения и именования данных на носителях информации в компьютерах, а также в другом электронном оборудовании.

FAT. Числа в FAT12, FAT16 и FAT32 обозначают количество бит, используемых для перечисления блока файловой системы. FAT32 является фактическим стандартом и устанавливается на большинстве видов сменных носителей по умолчанию. Одной из особенностей этой версии ФС является возможность применения не только на современных моделях компьютеров, но и в устаревших устройствах и консолях, снабженных разъемом USB.
Пространство FAT32 логически разделено на три сопредельные области: зарезервированный сектор для служебных структур; табличная форма указателей; непосредственная зона записи содержимого файлов.

Стандарт NTFS разработан с целью устранения недостатков, присущих более ранним версиям ФС. Впервые он был реализован в Windows NT в 1995 году, и в настоящее время является основной файловой системой для Windows. Система NTFS расширила допустимый предел размера файлов до шестнадцати гигабайт, поддерживает разделы диска до 16 Эб (эксабайт, 1018 байт). Использование системы шифрования Encryption File System (метод «прозрачного шифрования») осуществляет разграничение доступа к данным для различных пользователей, предотвращает несанкционированный доступ к содержимому файла. Файловая система позволяет использовать расширенные имена файлов, включая поддержку многоязычности в стандарте юникода UTF, в том числе в формате кириллицы. Встроенное приложение проверки жесткого диска или внешнего накопителя на ошибки файловой системы chkdsk повышает надежность работы харда, но отрицательно влияет на производительность.

Ext2, Ext3, Ext4 или Extended Filesystem– стандартная файловая система, первоначально разработанная еще для Minix. Содержит максимальное количество функций и является наиболее стабильной в связи с редкими изменениями кодовой базы. Начиная с ext3 в системе используется функция журналирования. Сегодня версия ext4 присутствует во всех дистрибутивах Linux.

XFS рассчитана на файлы большого размера, поддерживает диски до 2 терабайт. Преимуществом системы является высокая скорость работы с большими файлами, отложенное выделение места, увеличение разделов на лету, незначительный размер служебной информации. К недостаткам относится невозможность уменьшения размера, сложность восстановления данных и риск потери файлов при аварийном отключении питания.

4. Как посмотреть, какие файловые системы подмонтированы в ОС?

командой du.

5. Как удалить зависший процесс?

командой kill.

# Список литературы {.unnumbered}

1. Colvin H. VirtualBox: An Ultimate Guide Book on Virtualization with VirtualBox. — CreateSpace Independent Publishing Platform, 2015. — 70 с.
2. Unix и Linux: руководство системного администратора / Э. Немет и др. — 4-е изд. —Вильямс, 2014. — 1312 с.
