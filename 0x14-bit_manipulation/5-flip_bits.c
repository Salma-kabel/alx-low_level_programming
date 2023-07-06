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
	unsigned long int num, count = 0;
	
	num = n ^ m;
	while (num > 0)
	{
		count = count + (num & 1);
		num = num >> 1;
	}
	return (count);
}
