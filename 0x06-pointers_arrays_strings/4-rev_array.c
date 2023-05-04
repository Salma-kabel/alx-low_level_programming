#include "main.h"

/**
 * reverse_array - Reverses the content of
 *  an array of integers.
 *
 *  @a: array of integers
 *  @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[ n - 1 -i];
		a[n - 1 - i] = c;
	}
}

