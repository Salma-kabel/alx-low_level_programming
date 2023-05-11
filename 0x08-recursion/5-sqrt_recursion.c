#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: number
 *
 * Return: the square root of a number, -1 if it doesn't have a square root
 */

int _sqrt_recursion(int n)
{
	return (num2(n, 1, 0));	
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: number
 * @i: number
 * @count: square root
 *
 * Return: the square root of a number, -1 if it doesn't have a square root
 */

int num2(int n, int i, int count)
{
	if (n - i == 0)
	{
		return (1);
	}
	else if (n - i < 0)
	{
		return (-1);
	}
	else
	{
		if (num2(n - i, i - 2, count) > 0)
		{
			count++;
			return (count);
		}
		else
		{
			return (-1);
		}
	}
}
