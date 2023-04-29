#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 *  followed by a new line.
 *
 *  Return: 0 Always.
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

