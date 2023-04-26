#include "main.h"

/**
 * print_last_digit - gets the last digit of an integer and returns it.
 *
 * @n: The integer.
 *
 * Return: The last digit of the integer.
 */

int print_last_digit(int n)
{
	int v = n % 10;

	if (v > 0)
	{
		char c = v + 48;

		_putchar(c);
		return (v);
	}
	else if (v < 0)
	{
		char c = 48 - v;

		_putchar(c);
		return (-v);
	}
	else
	{
		char c = v + 48;

		_putchar(c);
		return (0);
	}
}

