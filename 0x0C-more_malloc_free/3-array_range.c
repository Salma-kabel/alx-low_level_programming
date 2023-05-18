#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers.
 *
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer to array of integers
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}

