#include <stdio.h>

/**
 * Prints its name, followed by a new line.
 *
 * @argv: number of command line arguments
 * @argc: array of pointers
 *
 * Return: 1 Always
 */

int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		return (0);
	}
	printf("%s\n",argv[0]);
	return (1);
}
