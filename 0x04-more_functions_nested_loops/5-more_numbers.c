#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 *  followed by a new line.
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
			{
				_putchar(j + 48);
			}
			else
			{
				_putchar((j / 10) + 48);
				_putchar((j % 10) + 48);
			}
		}
		write(1, "\n", 1);
	}
}

