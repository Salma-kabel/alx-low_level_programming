#include "main.h"

/**
 * *leet - Encodes a string into 1337
 *
 * @str: string
 *
 * Return: pointer to string
 */

char *leet(char *str)
{
	int i, j;
	char s1[] = "43071";
	char s2[] = "aeotl";
	char s3[] = "AEOTL";


	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (str[i] == s2[j] || str[i] == s3[j])
			{
				str[i] = s1[j];
			}
		}
	}
	return (str);
}

