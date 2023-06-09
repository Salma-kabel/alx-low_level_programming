#include <stdio.h>

/**
 * main - Prints its name, followed by a new line.
 *
 * @argv: number of command line arguments
 * @argc: array of pointers
 *
 * Return: 1 if no arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		return (1);
	}
	printf("%s\n", argv[0]);
	return (0);
}
