#include <stdio.h>

/**
 * main - Computes and prints the sum of all the multiples of 3 or 5
 *  below 1024 (excluded), followed by a new line.
 *
 *  Return: 0 Always.
 */

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
