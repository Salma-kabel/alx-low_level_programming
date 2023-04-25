#include "main.h"

/**
 * print_sign - Checks if a number is greater or smaller or equal to 0.
 *
 * @n: parameter that represents the number checked.
 *
 * Return: 1 if greater than 0, -1 if smaller than 0, 0 if equal to 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

