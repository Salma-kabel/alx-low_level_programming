#include <stdio.h>

/**
 * main - rints the first 50 Fibonacci numbers, starting with 1 and 2,
 *  followed by a new line.
 *
 *  Return: 0 Always
 */

int main(void)
{
	int i,n = 1, pn = 0, cn;

	for (i = 0; i < 49; i++)
	{
		cn = n + pn;
		pn = n;
		n = cn;
		printf(", %d", cn);
	}
	printf("\n");
	return (0);
}

