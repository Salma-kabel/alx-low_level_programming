#include "main.h"

/**
 * *_memset - Fills memory with a constant byte.
 *
 * @s: array
 * @b: number
 * @n: number of elements
 *
 * Return: pointer to array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

