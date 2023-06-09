#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *  followed by a new line
 *
 *  Return: 0 Always.
 */

int main(void)
{
	unsigned long int i, n = 1, pn = 0, cn;

	for (i = 0; i < 98; i++)
	{
		cn = n + pn;
		pn = n;
		n = cn;
		if (i != 97)
		{
			printf("%ld, ", cn);
		}
		else
		{
			printf("%ld\n", cn);
		}
	}
	return (0);
}

