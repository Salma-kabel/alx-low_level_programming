#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b:number of bytes
 * Return: pointer to void
 */

void *malloc_checked(unsigned int b)
{
	return (malloc(b));
}
