#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 *  followed by a new line.
 *
 *  Return: 0 Always.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

