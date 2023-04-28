#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9).
 *
 * @c: Represents the digit.
 *
 * Return: 1 if digit from 0 to 9, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

