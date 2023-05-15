#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Creates an array of chars, and
 *  initializes it with a specific char.
 *
 *  @size: size of array
 *  @c: character used to initialize the array
 *
 *  Return: pointer to array if existed, null otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc (sizeof(char) * size);
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				arr[i] = c;
			}
			return (arr);
		}
	}
}
