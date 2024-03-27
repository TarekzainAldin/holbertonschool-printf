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

	if (string == NULL)
		string = "(null)";

	while (*string != '\0')
	{
		_putchar(*string);
		string++;
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
	int i = 0, signe = 1, count = 0;
	int buff[10];
	int n = va_arg(args, int);



	if (n < INT_MIN || INT_MAX < n)
	return (-1);

/* print '-' if n negative */
	if (n < 0)
	{
	signe = -1;
	count += _putchar('-');
	}

	/* stores each digit of n (base 10) in an array */
	do {
	buff[i] = n % 10;
	n /= 10;
	i++;
	} while (n);


	/* imprime les digits du tableau */
	for (i--; i >= 0 ; i--)
		count += _putchar('0' + buff[i] * signe);


	return (count);

}
