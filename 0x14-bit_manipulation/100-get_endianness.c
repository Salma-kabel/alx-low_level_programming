#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: 1 if big endian, 0 otherwise
 */

int get_endianness(void)
{
	int n = 1;
	char *endian = (char *)&n;

	if (*endian == 1)
		return (1);

	return (0);
}
