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
		return (v);
	}
	else if (v < 0)
	{
		return (-v);
	}
	else
	{
		return (0);
	}
}

