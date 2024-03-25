#ifndef _EXISTE_DEJA_
#define _EXISTE_DEJA_
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
/**
 * struct CodeFormat_Fonction - CodeFormat-->NameFonction
 *
 * @Spe: The code of format
 * @Func: The function associated
 */
typedef struct CodeFormat_Fonction
{
	char *Spe;
	int (*Func)(va_list);
} TypeDef_CodeFormat_Fonction;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_unknow(va_list list);
int (*Func)(va_list);
#endif
