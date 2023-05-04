#include "main.h"

/**
 * *rot13 - Encodes a string using rot13.
 *
 * @str: string
 *
 * Return: pointer to string
 */

char *rot13(char *str)
{
	int i, j;
	char s1[] = "abcdefghijklmnopqrstuvwxyz";
	char s2[] = "nopqrstuvwxyzabcdefghijklm";
	char s3[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s4[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
			else if (str[i] == s3[j])
			{
				str[i] = s4[j];
				break;
			}
		}
	}
	return (str);
}

