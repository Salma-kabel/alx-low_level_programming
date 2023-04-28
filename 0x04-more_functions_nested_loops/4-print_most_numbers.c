#include "main.h"

/**
 * print_most_numbers - Prints the numbers, from 0 to 9,
 *  followed by a new line, except for 2 and 4.
 */

void print_most_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + 48);
		}
	}
	write(1, "\n", 1);
}
