#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as
 * a parameter on each element of an array.
 *
 * @array: array of integers
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < (int)size; i++)
		{
			action(array[i]);
		}
	}
}
