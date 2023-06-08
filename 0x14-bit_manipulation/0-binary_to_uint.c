#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: string of 0 and 1;
 * Return: converted number
 */ 

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, num = 0, p = 1;

	if (b == '\0')
		return (0);

	for (i = 0; i < strlen(b); i++)
	{
		if (!(b[i] >= 48 && b[i] <= 49))
			return (0);
		p = 1;
		for (j = 0; j < strlen(b) - (i + 1); j++)
		{
			p = p * 2;
		}
		num += (b[i] - 48) * p;
	}
	return (num);
}
