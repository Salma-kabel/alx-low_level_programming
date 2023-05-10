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
	unsigned int count = 0, k;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			k = count;
			if (s[j] == accept[i])
			{
				count++;
			}
		}
		if (count == k)
		{
			break;
		}
	}
	return (count);
}

