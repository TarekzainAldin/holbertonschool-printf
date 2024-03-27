#include "main.h"
#include <stdarg.h> // Include <stdarg.h> for va_list, va_start, va_end

/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i, j, count = 0, decal;
    
    // Define the struct TypeDef_CodeFormat_Fonction
    TypeDef_CodeFormat_Fonction Tab[] = {
        {"c", print_char},
        {"s", print_string},
        {"d", print_decimal},
        {"i", print_decimal},
        {"u", Unsigned},
        {"%", print_unknown},
        {"b", Dec_to_Bin},
        {"o", Dec_to_Oct},
        {"x", Dec_to_hex},
        {"X", Dec_to_HEX},
        {"r", rev_str},
        {"R", ROT13},
        {"p", print_addr},
        {NULL, NULL}
    };

    // Check if format is NULL
    if (format == NULL)
        return (-1);

    // Start variable argument list
    va_start(args, format);

    // Loop through the characters in format
    for (i = 0; format[i] != '\0'; i++)
    {
        // Check if the character is '%'
        if (format[i] == '%' && format[i + 1] != '\0')
        {
            // Initialize decal to 0
            decal = 0;
            
            // Check if the next character is a space
            if (format[i + 1] == ' ')
                decal = 1;
            
            // Increment i by 1 + decal
            i += 1 + decal;

            // Loop through the Tab array
            for (j = 0; Tab[j].Spe != NULL; j++)
            {
                // Check if the current specifier matches
                if (format[i] == *Tab[j].Spe)
                {
                    // Call the corresponding printing function
                    count += Tab[j].Func(args);
                    break;
                }
            }

            // If the specifier is not found, print the characters
            if (Tab[j].Spe == NULL)
            {
                count += _putchar(format[i + decal - 1]);
                count += _putchar(format[i + decal]);
            }
        }
        else if (format[i] == '%' && format[i + 1] == '\0')
        {
            // If '%' is the last character, set count to -1
            count = -1;
        }
        else
        {
            // Otherwise, print the character
            count += _putchar(format[i]);
        }
    }

    // End variable argument list
    va_end(args);

    // Return the total count of characters printed
    return (count);
}
