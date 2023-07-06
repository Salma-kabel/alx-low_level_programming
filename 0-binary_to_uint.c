#include "main.h"

/**
 * int binary_to_uint - Converts a binary number to an unsigned int.
 * @b: number
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i, x, j;

	if (b == NULL)
		return (0);

	for (i = 0; i < strlen(b); i++)
	{
		if (!(b[i] >= 0 && b[i] <= 57))
			return (0);
		x = 1;
		j = i;
		while (j != 0)
		{
			x = x * 2;
			j--;
		}
		num = num + (b[i] - 48) * x;
	}
	return (num);
}
