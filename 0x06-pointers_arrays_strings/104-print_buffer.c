#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "main.h"
/**
*print_buffer -  C function that prints the content of an
*  inputted number of bytes from a buffer.
*@b: number of bytes
*@size: size of the byte
*/
void print_buffer(char *b, int size)
{
	int i, j, r, k;

	if (size <= 0)
		printf("\n");
	else
		for (i = 0; i < size; i++)
		{
			if (i % 10 == 0)
				printf("%08x:", i);
			if (i % 2 == 0)
				printf(" ");
			printf("%02x", b[i]);
			if ((i % 10 == 9 && i > 0) || i + 1 == size)
				if ((i + 1) % 10 != 0)
					r = (i + 1) % 10;
					j = i + 1 - r;
					if (r > 0)
					{
						for (k = 0; k < ((20 - r * 2) + (10 - r) / 2); k++)
						{
							printf(" ");
						}
					}
				else
					j = i - 9;
				printf(" ");
				for (; j < i + 1 && j < size; j++)
				{
					if (!(b[j] > 31 && b[j] < 127))
					{
						printf(".");
					}
					else
					{
						printf("%c", b[j]);
					}
				}
				printf("\n");
		}
}
