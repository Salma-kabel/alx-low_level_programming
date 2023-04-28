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
		_putchar('\n');
	}
	else
	{
		for (i = n; i > 0; i--)
		{
			for (j = n - i; j > 0; j--)
			{
				_putchar(' ');
			}
			_putchar(92);
			write(1, "\n", 1);
		}
	}
}

