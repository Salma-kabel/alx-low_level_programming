# include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet x10
 * followed by a new line.
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;

	for (; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		write(1, "\n", 1);
	}
}
