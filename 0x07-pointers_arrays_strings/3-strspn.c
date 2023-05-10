#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: string
 * @accept: substring
 *
 * Return: number
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				count++;
			}
			else
			{
				break;
			}
		}
	}
	return (count);
}

