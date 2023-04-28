#include "main.h"

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
	int count = 0;

	if (n < 0)
	{
		_putchar(45);
	}
	while (m != 0)
	{
		count++;
		m = m / 10;
	}
	count++;
	for (i = 0; i < count; i++)
	{
		mul = 1;
		for (j = count - i; j > 1; j--)
		{
			mul = mul * 10;
		}
		print(count, mul, n, i);
		n = n % mul;
	}
}

/**
 * print - Prints the digits.
 * @count: number of digits.
 * @mul: factor.
 * @n: number.
 * @i: counter of loop.
 */
void print(int count, int mul, int n, int i)
{
	if (i + 1 == count)
	{
		if (n < 0)
		{
			_putchar(-n + 48);
		}
		else
		{
			_putchar(n + 48);
		}
	}
	else
	{
		if (n < 0)
		{
			_putchar((-n / mul) + 48);
		}
		else
		{
			_putchar((n / mul) + 48);
		}
	}
}

