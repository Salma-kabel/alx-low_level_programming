#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: string to search
 * @accept: string to use in search
 *
 * Return: pointer to string
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, c = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j < c && c != 0)
				{
					c = j;
				}
				else if (c == 0)
				{
					c = j;
				}
				break;
			}
		}
	}
	return (s + c);
}
