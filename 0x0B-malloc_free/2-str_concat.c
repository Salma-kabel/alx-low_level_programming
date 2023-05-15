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

	arr = malloc(sizeof(strlen(s1) + strlen(s2)) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0' && s1 != NULL; i++)
	{
		arr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && s2 != NULL; j++)
	{
		arr[i] = s2[j];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
