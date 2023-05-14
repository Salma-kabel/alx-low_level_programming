#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 *
 * @argc: number of command line arguments
 * @argv: array of pointers
 *
 * Return: 0 if all is well, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	if (argv == NULL)
	{
		return (1);
	}
	printf("%d\n",argc - 1);
	return (0);
}
