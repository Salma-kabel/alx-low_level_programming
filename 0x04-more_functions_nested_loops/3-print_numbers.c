#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9,
 *  followed by a new line.
 */

void print_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		_putchar(i + 48);
	}
	write(1, "\n", 1);
}

