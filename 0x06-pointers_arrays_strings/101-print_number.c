#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 *
 * @n: The integer.
 */

void print_number(int n)
{
	int m = n / 10;
	int mul = 1;
	int i, j;
	unsigned int k;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
	}

	while (m != 0)
	{
		count++;
		m = m / 10;
	}
	count++;
	k = -n;
	for (i = 0; i < count; i++)
	{
		mul = 1;
		for (j = count - i; j > 1; j--)
		{
			mul = mul * 10;
		}
		print(count, mul, n, i, k);
		n = n % mul;
	}
}

/**
 * print - Prints the digits.
 * @count: number of digits.
 * @mul: factor.
 * @n: number.
 * @i: counter of loop.
 * @k: positive n.
 */
void print(int count, int mul, int n, int i, int k)
{
	if (n < 0)
	{
		if (i + 1 == count)
		{
			k = -n;
			_putchar(k + 48);
		}
		else
		{
			k = -(n / mul);
			_putchar(k + 48);
		}
	}
	else
	{
		if (i + 1 == count)
		{
			_putchar(n + 48);
		}
		else
		{
			_putchar((n / mul) + 48);
		}
	}
}

