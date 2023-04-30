#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued terms,
 *  followed by a new line.
 *
 *  Return: 0 Always.
 */

int main(void)
{
	long int i, n = 1, pn = 0, sum = 0, cn;

	for (i = 0; n < 4000000; i++)
	{
		cn = n + pn;
		pn = n;
		n = cn;
		if (cn < 4000000)
		{
			if ( cn % 2 == 0)
			{
				sum = sum + cn;
			}
		}
		else
		{
			break;
		}
	}
	return (0);
}

