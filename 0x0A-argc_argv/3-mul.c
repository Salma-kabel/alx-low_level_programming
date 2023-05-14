#include <stdio.h>

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
		printf("%d\n", (*argv[1] - 48) * (*argv[2] - 48));
		return (0);
	}
}

