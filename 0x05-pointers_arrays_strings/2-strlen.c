#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: string
 *
 * Return : length of s.
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}

