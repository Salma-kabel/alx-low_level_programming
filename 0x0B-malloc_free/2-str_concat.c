#include "main.h"

/**
 * *str_concat - Concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string if existed,
 *  null otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *arr;

	if (s1 == NULL && s2 == NULL)
	{
		arr = malloc(0);
	}
	else if (s1 == NULL)
	{
		arr = malloc(sizeof(strlen(s2)) + 1);
	}
	else if (s2 == NULL)
	{
		arr = malloc(sizeof(strlen(s1)) + 1);
	}
	else
	{
		arr = malloc(sizeof(strlen(s1) + strlen(s2)) + 1);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
	{
		arr[i] = s1[i];
	}
	for (j = 0; s2 != NULL && s2[j] != '\0'; j++)
	{
		arr[i] = s2[j];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
