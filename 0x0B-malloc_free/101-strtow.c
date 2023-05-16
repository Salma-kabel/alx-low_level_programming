#include "main.h"

/**
 * **strtow - Splits a string into words.
 *
 * @str: array
 *
 * Return: pointer to 2d array if success, null otherwise
 */

char **strtow(char *str)
{
	int i, size2 = 0;
	char **arr;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 32 && str[i] <= 126 && (str[i + 1] == 32 || str[i + 1] == '\0'))
			size2++;
	}
	if (size2 == 0)
	{
		return (NULL);
	}
	size2++;
	arr = malloc(sizeof(char *) * size2);
	if (arr == NULL)
		return (NULL);
	arr[size2 - 1] = NULL;
	return (copy(str, size2, arr));
}

/**
 * **copy - Splits a string into words.
 *
 * @str: array
 * @size2: number of words
 * @arr: 2d array
 *
 * Return: pointer to 2d array if success, null otherwise
 */

char **copy(char *str, int size2, char **arr)
{
	int j = 0, i, k, l, size;

	for (i = 0; i < (size2 - 1); i++)
	{
		size = 0;
		k = j;
		for (; str[j] != '\0'; j++)
		{
			if (str[j] >= 33 && str[j] <= 126)
			{
				size++;
				if (str[j + 1] == 32 || str[j + 1] == '\0')
					break;
			}
		}
		j++;
		size++;
		arr[i] = malloc(size * sizeof(char));
		if (arr[i] == NULL)
		{
			while (i > 0)
			{
				free(arr[i - 1]);
				i--;
			}
			free(arr);
			return (NULL);
		}
		l = 0;
		for (; k < j; k++)
		{
			if (str[k] >= 33 && str[k] <= 126)
			{
				arr[i][l] = str[k];
				l++;
			}
		}
		arr[i][l] = '\0';
	}
	return (arr);
}
