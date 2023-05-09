#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two
 *  diagonals of a square matrix of integers.
 *
 *  @a: array
 *  @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0;

	for (i = 0; i < size * size; i = i + size + 1)
	{
		sum = sum + a[i];
	}
	printf("%d, ", sum);
	sum = 0;
	for (i = size - 1; i < size * size - 1; i = i + size - 1)
	{
		sum = sum + a[i];
	}
	printf("%d\n", sum);
}
