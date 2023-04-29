#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: 0 Always.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
		{
			putchar(i + 48);
		}
		else
		{
			putchar(i + 48);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}

