#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number
 *
 * @n: number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	return (num(n, n - 1));
}

/**
 * num - Checks if a number is a prime number
 *
 * @n: number
 * @i: number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int num(int n, int i)
{
	if (n == 1)
	{
		return (0);
	}
	else if (i == 1)
	{
		return (1);
	}
	else if (n <= 0)
	{
		return (0);
	}
	else if (n % i != 0)
	{
		return (num(n, i - 1));
	}
	else if (n % i == 0)
	{
		return (0);
	}
}
