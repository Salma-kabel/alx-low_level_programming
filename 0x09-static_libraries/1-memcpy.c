#include "main.h"

/**
 * *_memcpy - copies memory area.
 *
 * @dest: destination arrau
 * @src: source array
 * @n: number of elements
 *
 * Return: pointer to destination array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

