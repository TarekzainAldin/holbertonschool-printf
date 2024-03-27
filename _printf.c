#include "main.h"
#include <stdarg.h>
/**
 * _printf - My function printf
 * @format: string to print
 * Return: number charcarter print
 */
int _printf(const char *format, ...) {
    va_list args;
    int i, j, count = 0, decal;
    TypeDef_CodeFormat_Fonction Tab[] = {
{"c", print_char}, {"s", print_string}, {"d", print_decimal},
{"i", print_decimal}, {"u", Unsigned},{"%", print_unknown},
{"b", Dec_to_Bin}, {"o", Dec_to_Oct}, {"x", Dec_to_hex}, {"X", Dec_to_HEX} };
    if (format == NULL)
        return -1;
    va_start(args, format);
    for (i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && format[i + 1] != '\0') {
            decal = (format[i + 1] == ' ') ? 1 : 0;
            i += 1 + decal;
            for (j = 0; Tab[j].Spe != NULL; j++) {
                if (format[i] == *Tab[j].Spe) {
                    count += Tab[j].Func(args);
                    break;
                }
            }
            if (Tab[j].Spe == NULL) {
                count += _putchar(format[i + decal - 1]);
                count += _putchar(format[i + decal]);
            }
        } else if (format[i] == '%' && format[i + 1] == '\0') {
            count = -1;
        } else {
            count += _putchar(format[i]);
        }
    }
    va_end(args);
    return count;
}
