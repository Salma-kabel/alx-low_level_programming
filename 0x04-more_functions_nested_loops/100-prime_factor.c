#include <stdio.h>

/**
 * main - rints the largest prime factor of the
 *  number 612852475143, followed by a new line.
 *  Return: 0 Always.
 */

int main(void)
{
	int num, i;
	long a = 612852475143;

	while (a % 2 == 0)
	{
		num = 2;
		a = a / 2;
	}

	for (i = 3; i <= a / 2; i++)
	{
		while (a % i == 0)
		{
			num = i;
			a = a / i;
		}
	}
	if (a > num)
	{
		num = a;
	}
	printf("%d\n", num);
	return (0);
}

