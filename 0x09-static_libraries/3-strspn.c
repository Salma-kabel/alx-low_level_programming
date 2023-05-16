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

	for (i = 0; s[i] != '\0'; i++)
	{
		k = count;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (count == k)
		{
			break;
		}
	}
	return (count);
}

