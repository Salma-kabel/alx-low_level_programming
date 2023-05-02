#include "main.h"

/**
 * puts_half - Prints half of a string,
 *  followed by a new line.
 *
 *  @str: string.
 */

void puts_half(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	if (count % 2 == 0)
	{
		i = count / 2;
	}
	else
	{
		i = count / 2 + 1;
	}
	for ( ; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

