#  printf

<img src ="https://github.com/TarekzainAldin/holbertonschool-printf/blob/main/img/badge.png">

## Description

 We will present to you a customized version of the printf function, with the most basic functionalities such as printing:
- a chain,
- of a character
- whole number.


## Requirement

 - Ubuntu 20.04.06 LTS

 - include header file "main.h"

 - compilation line




```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

```

## How it's working

Using a composite data type such as struct which will contain the declaration of a char pointer *specifier and a pointer to a function called *print, this will be receiving a type val_list which will be the list of arguments from format, that will be printed in case there is a match between the struct first argument (specifier) and the format.