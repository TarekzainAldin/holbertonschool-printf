#include "main.h"
/**
 * Dec_to_Oct - Fonction print unsigned int argument converted to binary (%b)
 * @args: list of argument to print
 * Return: number of parameters printed
 */
int Dec_to_Oct(va_list args)
{

	int i = 0, count = 0;
	int buff[32];
	unsigned int n = va_arg(args, int);


	if (n > UINT_MAX)
	return (-1);

	/* mémorise chaque digit de n (base 8) dans un tableau */
	do {
		buff[i] = n % 8;
		n /= 8;
		i++;
	} while (n);


	/* imprime les digits du tableau */
	for (i--; i >= 0 ; i--)
	count += _putchar('0' + buff[i]);


	return (count);
}
