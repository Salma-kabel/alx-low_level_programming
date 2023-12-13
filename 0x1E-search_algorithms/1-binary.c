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
	int num, i;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < (int)size; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
	if (size % 2 == 0)
		num = (size - 1) / 2;
	else
		num = size / 2;
	if (array[num] == value)
	{
		return (num);
	}
	else if (array[num] > value)
	{
		i = binary_search(array, num, value);
	}
	else
	{
		i = binary_search(array + num + 1, size - num - 1, value);
		if (i == -1)
			return (-1);
		i = i + num + 1;
	}
	return (i);
}
