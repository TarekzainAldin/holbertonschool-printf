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
        {"c", print_char},
        {"s", print_string},
        {"%", print_unknown},
        {"d", print_decimal},
        {"i", print_decimal},
        {"b", Dec_to_Bin},
        {"o", Dec_to_Oct},
        {"x", Dec_to_hex},
        {"X", Dec_to_HEX},
        {"u", Unsigned}
    };

    if (format == NULL)
        return (-1);

    va_start(args, format);   /* initialize the argument list with the variable argument */
    for (i = 0; format[i] != 0; i++)     /* loop over the format string */
    {
        if (format[i] == '%' && format[i + 1] != '\0') /* if the character is '%' and not the end of the string */
        {
            decal = 0;
            if (format[i + 1] == ' ')
                decal = 1;
            i = i + 1 + decal; /* move the index to the next character */
            for (j = 0; Tab[j].Spe != 0; j++)  /* loop over the table of conversion specifiers */
            {
                if (format[i] == *Tab[j].Spe) /* if the character matches the conversion specifier */
                {
                    count  = count + Tab[j].Func(args); /* call the corresponding function and add the number of characters printed to the count */
                    break;
                }
            }
            if (Tab[j].Spe == 0) /* if the conversion specifier is not recognized */
            {
                count = count + _putchar(format[i + decal - 1]); /* print the '%' character */
                count = count + _putchar(format[i + decal]); /* print the unknown character */
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
