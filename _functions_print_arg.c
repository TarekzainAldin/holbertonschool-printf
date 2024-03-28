#include "main.h"
/**
  * print_char - Function to handle the %c specifier (character)
  * @args: list of arguments to print
  * Return: number of parameters printed
*/
int print_char(va_list args)
{
	_putchar (va_arg(args, int));
	return (1);
}
/**
  * print_string - Function to handle the %s (string) specifier
  * @args: list of arguments to print
  * Return: number of parameters printed
  */
int print_string(va_list args)
{
	int count = 0;
	char *string = va_arg(args, char *);

	if (string == 0)
		string = "(null)";

	while (string[count] != '\0')
	{
		_putchar(string[count]);
		count++;
	}
	return (count);
}

/**
  * print_unknown - Function to handle unknown specifier
  * (prints the character as is)
  * @args: list of arguments to print
  * Return: number of parameters printed
  */
int print_unknown(va_list args)
{
	(void)(args);
	_putchar('%');
	return (1);
}

/**
  * print_decimal - Function to handle the %d (decimal) specifier
  * @args: list of arguments to print
  * Return: number of parameters printed
  */
int print_decimal(va_list args)
{
	unsigned int m;
	int i = 0, k = 0, n = 0, count = 0;

	n = va_arg(args, int);
	if (n <= INT_MAX && n >= INT_MIN)
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
			count += 1;
		}
		m = n;
		for (k = 0; (m / 10) > 0; k++)
			m /= 10;

		m = n;
		while (k != 0)
		{
			for (i = 0; i < k; i++)
				m /= 10;
			m %= 10;
			_putchar(m + '0');
			count++;
			k--;
			m = n;
		}
		_putchar(m % 10 + '0');
		count++;
	}
	else
		return (-1);

	return (count);
}
