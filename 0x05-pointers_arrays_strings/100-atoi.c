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
		if (s[i] == '-')
		{
			n = n * -1;
		}
		else if (s[i] == '+')
		{
			n = n * 1;
		}
		else if (s[i] > 47 && s[i] < 58)
		{
			if (count == 0)
			{
				b = i;
			}
			count++;
		}
		else if (s[i - 1] > 47 && s[i - 1] < 58 && !(s[i] > 47 && s[i] < 58))
		{
			break;
		}
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (num + (s[b + i] - 48) * mul > 2147483647)
		{
			num = n * 2147483647 - 1;
			break;
		}
		num = num + (s[b + i] - 48) * mul;
		mul = mul * 10;
		num = itoi(num, i, n);
	}
	return (num);
}

/**
 * itoi - Convert a string to an integer.
 *
 *
 * @i: number
 *@num: number
 */
int itoi(int num, int i, int n)
{
	if (i == 0)
	{
		num = num * n;
	}
	return (num);
}
