#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: the first integer.
 * @b: the second integer.
 */

void swap_int(int *a, int *b)
{
	int* c;

	c = b;
	*c = *b;
	*b = *a;
	*a = *c;
}

