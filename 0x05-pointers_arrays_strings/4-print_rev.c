#include "main.h"

/**
 * print_rev - Prints a string, in reverse,
 *  followed by a new line.
 *
 *  @s: string.
 */

void print_rev(char *s)
{
	int i, count;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (i = 1; i < count + 1; i++)
	{
		_putchar(s[-i]);
	}
	_putchar('\n');
}

