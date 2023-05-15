#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - Copy the string given as a parameter.
 *
 * @str: string to be copied
 *
 * Return: pointer to a string contains copy of str
 */

char *_strdup(char *str)
{
	int i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * strlen(str) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (int) strlen(str); i++)
		{
			arr[i] = str[i];
		}
		arr[i + 1] = '\0';
		return (arr);
	}
}

