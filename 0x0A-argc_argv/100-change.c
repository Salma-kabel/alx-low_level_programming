#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: number of command line arguments
 * @argv: array of pointers
 *
 * Return: 1 if command line arguments is not 1, 0 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int n = atoi(argv[1]);
		int coins = 0;

		if (n < 0)
			printf("0\n");
		else
		{
			if (n / 25 != 0)
			{
				coins = coins + n / 25;
				n = n - (n / 25) * 25;
			}
			if (n / 10 != 0)
			{
				coins = coins + n / 10;
				n = n - (n / 10) * 10;
			}
			if (n / 5 != 0)
			{
				coins = coins + n / 5;
				n = n - (n / 5) * 5;
			}
			if (n / 2 != 0)
			{
				coins = coins + n / 2;
				n = n - (n / 2) * 2;
			}
			if (n / 1 != 0)
				coins = coins + n / 1;
			printf("%d\n", coins);
		}
	}
	return (0);
}
