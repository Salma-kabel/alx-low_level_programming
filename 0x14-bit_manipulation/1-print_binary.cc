#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: number
 */

void print_binary(unsigned long int n)
{
	if (n <= 0)
		return;

	print_binary(n >> 1);
	if ((n & 1) == 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
