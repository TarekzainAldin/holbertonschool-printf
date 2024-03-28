#include "main.h"
/**
 * Dec_to_hex - Fonction print unsigned int argument converted to HEX (%X)
 * @args: list of argument to print
 * Return: number of parameters printed
 */
int Dec_to_hex(va_list args)
{

	int i = 0, count = 0;
	int buff[32];
	unsigned int n = va_arg(args, int);


	if (n > UINT_MAX)
	return (-1);

	/* mémorise chaque digit de n (base 16) dans un tableau */
	do {
		buff[i] = n % 16;
		n /= 16;
		i++;
	} while (n);


	/* imprime les digits du tableau */
	for (i--; i >= 0 ; i--)
	{
		if (buff[i] <= 9)
			count += _putchar('0' + buff[i]);
		else
			count += _putchar('a' + buff[i] - 10);
	}

	return (count);
}
