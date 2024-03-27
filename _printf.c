#include "main.h"
#include <stdarg.h>
/**
 * _printf - My function printf
 * @format: string to print
 * Return: number charcarter print
 */
int _printf(const char *format, ...)
{
va_list args;
int i, j, count = 0, decal;
TypeDef_CodeFormat_Fonction Tab[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_decimal}, {"i", print_decimal}, {"u", Unsigned},
	{"%", print_unknown},
	{"b", Dec_to_Bin}, {"o", Dec_to_Oct}, {"x", Dec_to_hex}, {"X", Dec_to_HEX},
};

if (format == NULL)
return (-1);
va_start(args, format);   /* 1er argument variadique apres argument 'format' */
for (i = 0; format[i] != 0; i++)     /* boucle sur les caracteres de 'format'*/
{
	if (format[i] == '%' && format[i + 1] != '\0') /* si caractere = '%' */
	{	decal = 0;
		if (format[i + 1] == ' ')
			decal = 1;
		i = i + 1 + decal; /* Passer le caractère '%' et l'éventuel [espace] */
		for (j = 0; Tab[j].Spe != 0; j++)  /* boucle sur spé */
		{
			if (format[i] == *Tab[j].Spe)
			{	count  = count + Tab[j].Func(args);
				break;
			}
		}
		if (Tab[j].Spe == 0)
		{	count = count + _putchar(format[i + decal - 1]);
			count = count + _putchar(format[i + decal]);
		}
	}
	else if (format[i] == '%' && format[i + 1] == '\0')
		count = -1;
	else
		count = count + _putchar(format[i]);
}
va_end(args);
return (count);
}
