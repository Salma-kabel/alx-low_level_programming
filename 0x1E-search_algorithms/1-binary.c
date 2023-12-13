#include "search_algos.h"

/**
 * binary_search -  searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int num = ((size - 1) / 2), i, j;

	if (array == NULL || size < 1)
		return (-1);
	printf("Searching in array: ");
	for (j = 0; j < (int)size; j++)
	{
		printf("%d", array[j]);
		if (j != ((int)size - 1))
			printf(", ");
		else
			printf("\n");
	}
	if (array[num] == value)
		return (num);
	else if (size <= 1)
		return (-1);
	if (array[num] > value)
	{
		return (binary_search(array, num, value));
	}
	if (array[num] < value)
	{
		num += 1;
		i = binary_search(array + num, size - num, value);
		if (i == -1)
			return (-1);
		return (i + num);
	}
	return (-1);
}
