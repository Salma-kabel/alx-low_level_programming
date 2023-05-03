#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 *
 * @s: string
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int i, count = 0, b, n = 1, num = 0;
	unsigned int mul = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-' && s[i + 1] > 47 && s[i + 1] < 58)
		{
			n = -1;
		}
		else if (s[i] > 47 && s[i] < 58)
		{
			if (count == 0)
			{
				b = i;
			}
			count++;
		}
	}
	for (i = count - 1; i >= 0; i--)
	{
		num = num + (s[b + i] - 48) * mul;
		mul = mul * 10;
	}
	num = num * n;
	return (num);
}

