#include "3-calc.h"

/**
 * main - Performs simple operations.
 *
 * @argc: number of command line arguments
 * @argv: arguments
 *
 * Return: 0 if success, 98, 99, 100 otherwise
 */

int main(int argc, char *argv[])
{
	int a, b, n;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	n = get_op_func(argv[2])(a, b);
	printf("%d\n", n);
	return (0);
}


