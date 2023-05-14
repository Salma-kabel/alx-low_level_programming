#include <stdio.h>
#include <string.h>

/**
 * main - Multiplies two numbers
 *
 * @argc: number of command line arguments
 * @argv: array of pointers
 *
 * Return: 0 if 2 arguments, 1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i, n1 = 0, j, n2 = 0, mul;

		for (i = 0; i < (int) strlen(argv[1]); i++)
		{
			if (argv[1][i] == '-')
				continue;
			mul = 1;
			for (j = 0; j < (int) strlen(argv[1]) - (i + 1); j++)
			{
				mul = mul * 10;
			}
			n1 = n1 + (argv[1][i] - 48) * mul;
		}
		for (i = 0; i < (int) strlen(argv[2]); i++)
		{
			if (argv[2][i] == '-')
				continue;
			mul = 1;
			for (j = 0; j < (int) strlen(argv[2]) - (i + 1); j++)
			{
				mul = mul * 10;
			}
			n2 = n2 + (argv[2][i] - 48) * mul;
		}
		if (argv[1][0] == '-')
		{
			n1 = - n1;
		}
		else if (argv[2][0] == '-')
		{
			n2 = - n2;
		}
		printf("%d\n", n1 * n2);
		return (0);
	}
}

