#include "main.h"
/**
 * _printf - My function printf
 * @format: string to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;
	unsigned int j;
	TypeDef_CodeFormat_Fonction Tab[] = {
{"c", print_char}, {"s", print_string}, {"%", print_unknown},
{"d", print_decimal}, {"i", print_decimal}, {"b", Dec_to_Bin},
{"o", Dec_to_Oct}, {"x", Dec_to_hex}, {"X", Dec_to_HEX}, {"u", Unsigned} };
	if (format == NULL)
		return (0);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			for (j = 0; j < (sizeof(Tab) / sizeof(Tab[0])); j++)
			{
				if (format[i] == *Tab[j].Spe)
				{count += Tab[j].Func(args);
					break;
				}
			}
			if (j == sizeof(Tab) / sizeof(Tab[0]))
			{_putchar('%');
				count++;
				if (format[i] != '%')
				{_putchar(format[i]);
					count++;
				}
			}
		}
		else
		{_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
