#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 *
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: i if success , -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, c;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		c = cmp(array[i]);
		if (c != 0)
		{
			return (i);
		}
	}
	return (-1);
}
