#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 *
 * @n: The integer.
 */

void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		printf("n=%d\n",n);
		k = n;
		printf("k=%d\n",k);
		_putchar('-');
	}
	k /= 10;
	if (k != 0)
	print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}

