#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: number
 * @index: position of bit
 * Return: the value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return(-1);

	if ((n & (1 << index)) == 1)
		return (1);

	return (0);
}
