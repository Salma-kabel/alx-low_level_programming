#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: number
 */

void print_binary(unsigned long int n)
{
	if (n <= 1)
		_putchar((n & 1) + '0');
	else
		print_binary(n >> 1);
}
