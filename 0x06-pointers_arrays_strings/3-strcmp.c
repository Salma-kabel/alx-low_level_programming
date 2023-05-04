#include "main.h"

/**
 * _strcmp - ompares two strings.
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 if s1 = s2, negative if s1 < s2 ,
 * positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, n1 = 0, n2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		n1 = n1 + s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		n2 = n2 + s2[i];
	}
	return (n1 - n2);
}

