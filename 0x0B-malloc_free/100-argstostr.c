#include "main.h"

/**
 * *argstostr - Concatenates all the arguments of your program.
 *
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, size = 0;
	char *arr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] >= 32 && av[i][j] <= 126; j++)
		{
			size = size + sizeof(av[i][j]);
		}
		size = size + 1;
	}
	size++;
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] >= 32 && av[i][j] <= 126; j++)
		{
			arr[k] = av[i][j];
			k++;
		}
		arr[k] = '\n';
		k++;
	}
	arr[k] = '\0';
	return (arr);
}
