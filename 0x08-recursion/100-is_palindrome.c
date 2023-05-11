#include "main.h"
#include <string.h>
#include <stdio.h>
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

	return (str(s, i));
}

/**
 * str - checks if a string is palindrome
 *
 * @s: string
 * @size: size of string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int str(char *s, int size)
{
	if (size == 1)
	{
		return (1);
	}
	else if (size == 2)
	{
		if (s[0] == s[1])
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else if (s[0] == s[size - 1])
	{
		return (str(s + 1, size - 2));
	}
	else
	{
		return (0);
	}
}

