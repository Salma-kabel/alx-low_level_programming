#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits.
 *
 * Return: 0 Always.
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = 1; j < 9; j++)
		{
			for (k = 2; k < 10; k++)
			{
				if (k > j && j > i)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
				}
				if (i == 7 && j == 8 && k == 9)
				{
					continue;
				}
				else if (k > j && j > i)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
