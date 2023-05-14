#include <stdio.h>
#include <string.h>

/**
 * main - Adds positive numbers.
 *
 * @argc: number of command line arguments
 * @argv: array of pointers
 *
 * Return: 1 if there is an error , 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, k, n1 = 0, n2 = 0, mul;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (k = 1; k < argc; k++)
		{
			n1 = 0;
			for (i = 0; i < (int) strlen(argv[k]); i++)
			{
				if (!(argv[k][i] >= 48 && argv[k][i] <= 57))
				{
					printf("Error\n");
					return (1);
				}
				if (argv[k][i] == '-')
					continue;
				mul = 1;
				for (j = 0; j < (int) strlen(argv[k]) - (i + 1); j++)
				{
					mul = mul * 10;
				}
				n1 = n1 + (argv[k][i] - 48) * mul;
			}
			if (argv[k][0] == '-')
				n1 = -n1;
			n2 = n2 + n1;
		}
		printf("%d\n",n2);
	}
	return (0);
}

