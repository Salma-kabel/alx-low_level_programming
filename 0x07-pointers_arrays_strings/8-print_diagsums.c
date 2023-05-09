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
	int i, j, sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("%d, ", sum);
	sum = 0;
	for (i = 0; i < size; i++)
	{
		j = size - i - 1;
		sum = sum + a[i][j];
	}
	printf("%d\n", sum);
}
