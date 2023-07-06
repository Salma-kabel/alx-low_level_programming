#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: position of bit
 * Return: 1 if success , -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
