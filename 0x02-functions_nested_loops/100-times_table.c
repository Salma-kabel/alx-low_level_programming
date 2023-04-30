#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * @n: integer.
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 16)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i * j < 10)
				{
					_putchar((i * j) + 48);
				}
				else if (i * j > 9 && i * j < 100)
				{
					_putchar(((i * j) / 10) + 48);
					_putchar(((i * j) % 10) + 48);
				}
				else
				{
					_putchar(((i * j) / 100) + 48);
					_putchar((((i * j) / 10) % 10) + 48);
					_putchar(((i * j) % 10) + 48);
				}
				if (j == n)
				{
					_putchar('\n');
				}
				else
				{
					print(i, j);
				}
			}
		}
	}
}

/**
 * print - Prints after the number.
 *
 * @i: counter.
 * @j: counter.
 */
void print(int i, int j)
{
	if (i * (j + 1) < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	else if (i * (j + 1) > 9 && i * (j + 1) < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
	}
}
