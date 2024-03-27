#include "main.h"
/**
 * _printf - My function printf
 * @format: string to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, j, count = 0, decal;
	TypeDef_CodeFormat_Fonction Tab[] = {
{"c", print_char}, {"s", print_string}, {"%", print_unknown},
{"d", print_decimal}, {"i", print_decimal}, {"b", Dec_to_Bin},
{"o", Dec_to_Oct}, {"x", Dec_to_hex}, {"X", Dec_to_HEX}, {"u", Unsigned} };
	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			decal = 0;
			if (format[i + 1] == ' ')
				decal = 1;
			i = i + 1 + decal;
			for (j = 0; Tab[j].Spe != 0; j++)
			{
				if (format[i] == *Tab[j].Spe)
				{count += Tab[j].Func(args);
					break;
				}
			}
			if (Tab[j].Spe == 0)
			{count += _putchar(format[i + decal - 1]);
				count += _putchar(format[i + decal]);
			}
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
		{count = -1;
		}
		else
		{
			count += _putchar(format[i]);
		}
	}
	va_end(args);
	return (count);
}
