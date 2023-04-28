#include <stdio.h>

/**
 * main -  Prints the numbers from 1 to 100,
 *  followed by a new line.
 *  
 *  Return: 0 Always.
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i == 100)
		{
			printf("Buzz\n");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}

