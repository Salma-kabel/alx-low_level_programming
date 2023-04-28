#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 *
 * @size: Represents the size of triangle.
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < i; j++)
			{
				for (k = size - i; k > 0 && j < 1; k--)
				{
					_putchar(' ');
				}
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

