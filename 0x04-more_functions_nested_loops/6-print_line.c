#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 *
 * @n: Represents the number of times to print '_'.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		write(1, "\n", 1);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		write(1, "\n", 1);
	}
}

