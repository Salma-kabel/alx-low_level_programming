#include "main.h"

/**
 * *_strncpy - Copies a string.
 *
 * @dest: string
 * @src: string
 * @n: number of characters
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

