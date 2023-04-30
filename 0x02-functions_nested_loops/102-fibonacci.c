#include <stdio.h>

/**
 * main - rints the first 50 Fibonacci numbers, starting with 1 and 2,
 *  followed by a new line.
 *
 *  Return: 0 Always
 */

int main(void)
{
	long int i, n = 1, pn = 0, cn;

	for (i = 0; i < 50; i++)
	{
		cn = n + pn;
		pn = n;
		n = cn;
		if ( i != 49)
		{
			printf("%d, ", cn);
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}

