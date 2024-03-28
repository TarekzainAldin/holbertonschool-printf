#  printf

<img src ="https://github.com/TarekzainAldin/holbertonschool-printf/blob/main/img/badge.png">

## Description

 We will present to you a customized version of the printf function, with the most basic functionalities such as printing:
- a chain,
- of a character
- whole number.


## Requirement

 - Ubuntu 18.04 LTS or 22.04 LTS

 - include header file "main.h"

 - compilation line




```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

```

## How it's working

Using a composite data type such as struct which will contain the declaration of a char pointer *specifier and a pointer to a function called *print, this will be receiving a type val_list which will be the list of arguments from format, that will be printed in case there is a match between the struct first argument (specifier) and the format.


<img src ="https://github.com/TarekzainAldin/holbertonschool-printf/blob/main/img/Printf.png">


## Example

```javascript
int main(void)
{
    _printf("hello, it's me');
    return(0);
}
```
output
```
Hello, it's me
```
## Testing
```
len = _printf("Let's try to printf a simple sentence.\n");
_printf ("return : %d\n\n", len);

len = _printf(NULL);
_printf ("return sting forma = NULL : %d\n\n", len);

len = _printf("Percent:[%%]\n");
_printf ("return : %d\n\n", len);

len = _printf("Unknown:[%r]\n");
_printf ("return : %d\n\n", len);

len = _printf("Percent:[%%%]\n");
_printf ("return : %d\n\n", len);

len = _printf("Percent:[%%%%]\n");
_printf ("return : %d\n\n", len);

len = _printf("One Percent at the end %");
_printf ("return : %d\n\n", len);

len = _printf("Character: [%c]\n", 'H');
_printf ("return : %d\n\n", len);

len = _printf("Character NULL : [%c]\n", NULL);
_printf ("return : %d\n\n", len);

len = _printf("String:[%s]\n", "I am a string !");
_printf ("return : %d\n\n", len);

len = _printf("String:[% s]\n", "I am a string !");
_printf ("return : %d\n\n", len);

len = _printf("String NULL:[%s]\n", NULL);
_printf ("return : %d\n\n", len);

len = _printf("Positive:[%d]\n", 762534);
_printf ("return : %d\n\n", len);

len = _printf("Zero:[%d]\n", -0);
_printf ("return : %d\n\n", len);

len = _printf("Negative:[%d]\n", -762534);
_printf ("return : %d\n\n", len);

len = _printf("Combinaison Car[%c] String[%s] int[%d]\n", 'X', "ABCDEF", -762534);
_printf ("return : %d\n\n", len);
```
and the output would be:
```
Let's try to printf a simple sentence.
return : 39

return sting forma = NULL : -1

Percent:[%]
return : 12

Unknown:[%r]
return : 13

Percent:[%%]
return : 13

Percent:[%%]
return : 13

One Percent at the end return : -1

Character: [H]
return : 15

Character NULL : []
return : 21

String:[I am a string !]
return : 25

String:[I am a string !]
return : 25

String NULL:[(null)]
return : 21

Positive:[762534]
return : 18

Zero:[0]
return : 9

Negative:[-762534]
return : 19

Combinaison Car[X] String[ABCDEF] int[-762534]
return : 49
```
## Authors

- Tarek Zain Al Din <img src ="https://github.com/TarekzainAldin/holbertonschool-printf/blob/main/img/github-mark.png" height= "20" width= "20"> [@TarekzainAldin](https://github.com/TarekzainAldin)
- Erwan Lebreton <img src ="https://github.com/TarekzainAldin/holbertonschool-printf/blob/main/img/github-mark.png" height= "20" width= "20"> [@Erwan2072](https://github.com/Erwan2072)