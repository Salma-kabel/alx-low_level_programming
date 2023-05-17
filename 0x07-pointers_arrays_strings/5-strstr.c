#include "main.h"
#include <string.h>

/**
 * _strstr - Locates a substring.
 *
 * @haystack: string to search
 * @needle: string to use
 *
 * Return: pointer to string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, c = -1, n = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && needle[j] != '\0')
			{
				if (j == 0)
				{
					c = i;
				}
				n++;
				j++;
			}
			if (n == (int) strlen(needle))
			{
				break;
			}
			else if (n < (int) strlen(needle))
			{
				n = 0;
				j = 0;
				c = -1;
			}
		}
	}
	if (c == -1)
	{
		return (NULL);
	}
	else
	{
		return (haystack + c);
	}
}
