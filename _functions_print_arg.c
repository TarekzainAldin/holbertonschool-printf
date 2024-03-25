#include "main.h"

/**
 *print_char - function specificateur %c character
 *@args: list of argument to print
 * Return: number of parameters printed
 */

int print_char(va_list args)
{
	_putchar(va_args(args, int));
	return (1);
}

/**
 *print_string - function specificateur %s string
 *@arg: list of argument to print
 *Return: number of parameters
 */
Int print_string(va_list args)
{
	int i = 0;
	char *string = va _args (args, char*);

	if(string == 0)
		string = "(NULL)";
	while (string[i] !='\0')
	{
		_putchar(string[i]);
		i++;
	}
	return(i);
}

/**
 *print_unknown - function specificateur unknown
 *@arg: list of argument to print
 *Return: number of parameters
 */

int print_decimal(va_list args);
{
	int i = 0, signe = 1, count = 0;
	int buff[10];
	int n = va_arg(args, int);
	if (n < INT_MIN || INT_MAX < n)
	return (-1);
	/*prints '-' if n negative */
	if (n < 0)
	{
	signe = -1;
	count += _putchar('-');
	}
	/*stores each digit of n (base 10) in an array */
	do {
	buff[i] = n % 10;
	n /= 10;
	i++;
	} while (n);
	/* prints table digits */
	for (i--; i >= 0 ; i--)
		count += _putchar('0' + buff[i] * signe);
	return (count);
}
