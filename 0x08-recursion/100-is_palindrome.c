#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is palindrome
 *
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int i = strlen(s);

	for (i = 0; i < (int) strlen(s) / 2; i++)
	{
		if (s[i] == s[strlen(s) - (i + 1)])
		{
			continue;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

