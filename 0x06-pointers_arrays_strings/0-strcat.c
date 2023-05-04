#include "main.h"

/**
 * *_strcat - oncatenates two strings.
 *
 * @src: string
 * @dest: string
 *
 * Return: pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[i + 1] == '\0')
		{
			for (j = i + 1; src[j - i - 1] != '\0'; j++)
			{
				dest[j] = src[j - i - 1];
				
				if (src[j - i] == '\0')
				{
					dest[j + 1] = '\0';
				}
			}
			break;
		}
	}
	return (dest);
}

