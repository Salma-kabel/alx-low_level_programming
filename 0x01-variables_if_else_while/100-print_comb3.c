#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: 0 Always.
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (j > i)
			{
				putchar(i + 48);
				putchar(j + 48);
			}
			if (j > i && i == 8 && j == 9)
			{
				continue;
			}
			else if (j > i)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

