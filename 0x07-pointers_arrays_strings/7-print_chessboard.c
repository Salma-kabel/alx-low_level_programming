#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 *
 * @*a: array
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0, a[i][8] != '\0'; i++)
	{
		for (j = 0; a[i][j] != '\0'; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

