#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 *
 * @ptr: ptr to old array
 * @old_size: size of old array
 * @new_size: size of new array
 *
 * Return: pointer to array if success, null otherwise
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int i, j;

	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	arr = malloc(new_size);
	if (arr == NULL)
	{
		return (NULL);
	}
	if (old_size > new_size)
		j = new_size;
	else
		j = old_size;
	for (i = 0; i < j; i++)
	{
		*((char *)arr + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (arr);
}
