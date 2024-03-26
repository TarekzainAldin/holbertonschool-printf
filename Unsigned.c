#include "main.h"
/**
 * Unsigned - Fonction print unsigned int argument converted to binary (%b)
 * @args: list of argument to print
 * Return: number of parameters printed
 */
int Unsigned(va_list args)
{

	int i = 0, count = 0;
	int buff[32];
	unsigned int n = va_arg(args, int);


	if (n > UINT_MAX)
	return (-1);

	/* mémorise chaque digit de n (base 10) dans un tableau */
	do {
		buff[i] = n % 10;
		n /= 10;
		i++;
	} while (n);


	/* imprime les digits du tableau sauf l'unité*/
	for (i--; i >= 0 ; i--)
	count += _putchar('0' + buff[i]);

	return (count);
}
