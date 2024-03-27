#include "main.h"
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
{"c", print_char}, {"s", print_string}, {"%", print_unknown},
{"d", print_decimal}, {"i", print_decimal}, {"b", Dec_to_Bin},
{"o", Dec_to_Oct}, {"x", Dec_to_hex}, {"X", Dec_to_HEX},{"u", Unsigned} };
	if (format == NULL)
        return (-1);
    va_start(args, format);/* 1st variadic argument after 'format' argument */
    for (i = 0; format[i] != 0; i++)     /* loop on 'format' characters*/ {
        if (format[i] == '%' && format[i + 1] != '\0') /* if character = '%' */
        {   decal = 0;
            if (format[i + 1] == ' ')
                decal = 1;
            i = i + 1 + decal; /*Skip the '%' character (optional) space */
            for (j = 0; Tab[j].Spe != 0; j++)  /* for loop on sp */
            {
                if (format[i] == *Tab[j].Spe)
                {   count  = count + Tab[j].Func(args);
                    break;
                }
            }
            if (Tab[j].Spe == 0)
            {   count = count + _putchar(format[i + decal - 1]);
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
  
