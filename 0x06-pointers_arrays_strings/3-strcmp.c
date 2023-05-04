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
	int i = 0;

	while (s1[i] == s2[i])
	{
		i++;
	}
	return(s1[i] - s2[i]);
}

