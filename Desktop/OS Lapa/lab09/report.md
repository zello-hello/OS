---
# Front matter
lang: ru-RU
title: "Отчёт по лабораторной работе №09"
subtitle: "Редактор Emacs"
author: "Лапасов Зелимхан Абитханович НБИ-БД-01-20"

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

Познакомиться с операционной системой Linux. Получить практические навыки работы с редактором Emacs.

# Выполнение лабораторной работы

1. Откроем Emacs.

![Запуск Emacs](image/01.png){ #fig:001 width=70% height=70% }

2. Создадим файл lab07.sh с помощью комбинации Ctrl-x Ctrl-f и наберем текст из задания в ново созданный файл.  

![Новый файл](image/02.png){ #fig:002 width=70% height=70% }

3. Сохраним файл с помощью комбинации Ctrl-x s. Проделаем с текстом стандартные процедуры редактирования, каждое действие осуществляется комбинациями клавиш. Вырежем командой Ctrl-w. целую строку. Вставим эту строку в конец файла командой Ctrl-y.  

![Операция вставка](image/03.png){ #fig:003 width=70% height=70% }

4. Выделим область текста командой  Ctrl-space.

![Выделение блока](image/04.png){ #fig:004 width=70% height=70% }

5. Скопируем область в буфер обмена командой alt-w. Вставим область в конец файла.

![Копирование блока](image/05.png){ #fig:005 width=70% height=70% }

6. Вновь выделим эту область и на этот раз вырежем её командой Ctrl-w.

![Удаление блока](image/06.png){ #fig:006 width=70% height=70% }

7. Отменим последнее действие командой Ctrl-x u.

8. Научимся использовать команды по перемещению курсора.

 - Переместим курсор в начало строки командой Ctrl-a.

 - Переместим курсор в курсор строки командой Ctrl-e.

 - Переместим курсор в начало буфера Alt-<.

 - Переместим курсор в конец буфера Alt->.

9. Управление буферами. Введем Ctrl-x 2.

![Горизонтальное разделение](image/07.png){ #fig:007 width=70% height=70% }

10. Переместим вновь открытое окно Ctrl-x   со списком открытых буферов и переключимся на другой буфер.

![Переключение буфера](image/08.png){ #fig:008 width=70% height=70% }

11.  Закроем это окно командой Ctrl-x 0.

![Закроем буфер](image/09.png){ #fig:009 width=70% height=70% }

12. Теперь вновь переключимся между буферами, но уже без вывода их списка на экран Ctrl-x b.

![Переключение буфера](image/10.png){ #fig:010 width=70% height=70% }

13. Поделим фрейм на 4 части: разделитм фрейм на два окна по вертикали Ctrl-x 3, а затем каждое из этих окон на две части по горизонтали Ctrl-x 2.
В каждом из четырёх созданных окон откроем новый буфер (файл).

![Четыре буфера](image/11.png){ #fig:011 width=70% height=70% }

14. Переключимся в режим поиска Ctrl-s  и найдем несколько слов, присутствующих в тексте. Выйдем из режима поиска, нажав Ctrl-g.
Перейдем в режим поиска и замены Alt-Shift %, введем текст, который следует найти и заменить, для замены нажмем Enter. После этого нажмем ! для подтверждения замены.
Если мы хотим заменить конкретные слова то мы их выделяем и нажимаем Enter. Если все то !
Испробуем другой режим поиска, нажав Alt-s .  
От обычного режима отличается тем, что находит не фрагмент текста, а файл.

![Режим поиска](image/12.png){ #fig:012 width=70% height=70% }

# Вывод

 В данной работе мы познакомились с еще одним редактором операционной системой Linux. Получили практические навыки работы с редактором Emacs.

# Контрольные вопросы

Контрольные вопросы:

1. Кратко охарактеризуйте редактор emacs.
Ответ: Emacs представляет собой мощный экранный редактор текста, написанный на языке высокого уровня Elisp.

2. Какие особенности данного редактора могут сделать его сложным для освоения новичком?
Ответ: Сложным освоение данной программы для новичка  может сделать незнание комбинации клавиш или английского.

3. Своими словами опишите, что такое буфер и окно в терминологии emacs’а
Ответ: Моими словами буфер это динамическая память, а окно- то, что мы видим

4. Можно ли открыть больше 10 буферов в одном окне?
Ответ: Можно если нет ограничений на систему.

5. Какие буферы создаются по умолчанию при запуске emacs?
Ответ: Буферы, которые открываются по умолчанию: GNU Emacs, scratch, Messages, Quail Completions

6. Какие клавиши вы нажмёте, чтобы ввести следующую комбинацию C-c | и C-c C-|?
Ответ: Сtrl+c, Shift+\ и Ctrl+c Ctrl+\

7. . Как поделить текущее окно на две части?
Ответ: Нажать   C-x 3, или  C-x 2.

8. В каком файле хранятся настройки редактора emacs?
Ответ: Настройки хранятся в файле ~/.emacs.

9. Какую функцию выполняет клавиша Backspace и можно ли её переназначить?
Ответ: Перемещение курсора

10. Какой редактор вам показался удобнее в работе vi или emacs? Поясните почему.
Ответ: Редактор emacs ,потому что на нем можно работать сразу с несколькими файлами.
