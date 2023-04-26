#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int c = i * j;

			if (c < 10)
			{
				_putchar(c + 48);
			}
			else
			{
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
			if (j != 9)
			{
				if (c < 10)
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
		}
		write(1, "\n", 1);
	}
}
