#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet followed
 * by a new line.
 */


void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	write(1, "\n", 1);
}

