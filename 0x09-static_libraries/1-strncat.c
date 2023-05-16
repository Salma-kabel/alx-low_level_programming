#include "main.h"

/**
 * *_strncat - Concatenates two strings.
 *
 * @dest: string
 * @src: string
 * @n: number
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[i + 1] == '\0')
		{
			for (j = 0; j < n; j++)
			{
				dest[i + 1 + j] = src[j];
				if (j + 1 == n)
				{
					dest[i + 2 + j] = '\0';
				}
			}
			break;
		}
	}
	return (dest);
}
