#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits, count = 0;

	bits = n ^ m;

	while (bits > 0)
	{
		count = count + (bits & 1);
		bits = bits >> 1;
	}
	return (count);
}
