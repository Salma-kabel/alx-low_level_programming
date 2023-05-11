#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings are identical
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (s2[0] == '\0')
	{
		if (s1[0] == '\0')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else if (s1[0] == s2[0])
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (s2[0] == '*')
	{
		return (wildcmp(s1, s2 + 1) || (wildcmp(s1 + 1, s2)));
	}
	else
	{
		return (0);
	}
}
