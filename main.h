#ifndef _MAIN_H
#define _MAIN_H
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
int print_char(va_list args);
int print_string(va_list args);
int print_unknown(va_list args);
int print_decimal(va_list args);
int print_i_decimal(va_list args);

int Dec_to_Bin(va_list args);
int Unsigned(va_list args);
int Dec_to_Oct(va_list args);
int Dec_to_hex(va_list args);
int Dec_to_HEX(va_list args);
#endif
