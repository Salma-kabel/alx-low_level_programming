#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: number
 * @index: position of number
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
