#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: string
 */

void rev_string(char *s)
{
	int i, count = 0;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		c = s[i];
		s[i] = s[count - 1 - i];
	}
}

