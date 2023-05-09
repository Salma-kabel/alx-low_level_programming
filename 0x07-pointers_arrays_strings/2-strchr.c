#include "main.h"

/**
 * *_strchr - Locates a character in a string.
 *
 * @s: array
 * @c: character
 *
 * Return: pointer to character if found, 0 otherwise
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}

