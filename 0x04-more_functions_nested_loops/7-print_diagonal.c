#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 *
 * @n: Represents the number of lines.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		write(1, "\n", 1);
	}
	else
	{
		for (i = n; i > 0; i--)
		{
			for (j = n - i; j > 0; j--)
			{
				_putchar(' ');
			}
			_putchar(47);
			write(1, "\n", 1);
		}
	}
}

