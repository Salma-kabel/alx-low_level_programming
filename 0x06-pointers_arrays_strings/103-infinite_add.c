#include "main.h"
#include <stdio.h>



char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, c , b1, b2;
	char *v;

	for (i = 0; n1[i] != '\0'; i++)
	{
		if (n1[i + 1] == '\0')
		{
			b1 = i;
		}
	}
	for(i = 0; n2[i] != '\0'; i++)
	{
		if (n2[i + 1] == '\0')
		{
			b2 = i;
		}
	}
	if (b1 > b2 )
	{
		c = 1;
	}
	else if (b2 > b1)
	{
		c = 2;
	}
	else
	{
		c = 0;
	}
	if (c == 1 || c == 0)
	{
		v = add(n1, n2, r, size_r, b1, b2);
	}
	else
	{
		v = add(n2, n1, r, size_r, b2, b1);
	}
	return (v);
}



char *add(char *n1, char *n2, char *r, int size_r, int b1, int b2)
{
	int i, j, rem = 0, k;

	for (i = 0; i <= b1; i++)
	{
		if (b1 != b2)
		{
			if (size_r - (i + 1) <  0)
			{
				return (0);
			}
			if (((n1[b1 - i] - 48) + (n2[b2 - i] - 48) + rem) > 9)
			{
				r[size_r - (i + 1)] = (((n1[b1 - i] - 48) + (n2[b2 - i] - 48) + rem) % 10) + 48;
				rem = ((n1[b1 - i] - 48) + (n2[b2 - i] - 48) + rem) / 10;
			}
			else
			{
				r[size_r - (i + 1)] = ((n1[b1 - i] - 48) + (n2[b2 - i] - 48) + rem) + 48;
				rem = 0;
			}
			k = size_r - (i + 1);
			if (b2 - (i + 1) < 0)
			{
				for (j = i + 1; j <= b1; j++)
				{
					if (size_r - (j + 1) < 0)
					{
						return (0);
					}
					if (((n1[b1 - j] - 48) + rem) > 9)
					{
						r[size_r - (j + 1)] = (((n1[b1 - j] - 48) + rem) % 10) + 48;
						rem = ((n1[b1 - j] - 48) + rem) / 10;
					}
					else
					{
						r[size_r - (j + 1)] = ((n1[b1 - j] - 48) + rem) + 48;
						rem = 0;
					}
					k = size_r - (j + 1);
					if (b1 - (j + 1) < 0 )
					{
						if (rem > 0)
						{
							if (size_r - (j + 2) < 0)
							{
								return (0);
							}
							else
							{
								r[size_r - (j + 1) - 1] = rem + 48;
								k = size_r - (j + 1) - 1;
							}
						}
					}
				}
				break;
			}
		}
		else
		{
			if (size_r - (i + 1) < 0)
			{
				return (0);
			}
			if (((n1[b1 - i] - 48) + (n2[b2 - i] - 48) + rem) > 9)
			{
				r[size_r - (i + 1)] = (((n1[b1 - i] - 48) + (n2[b2 - i] - 48) + rem) % 10) + 48;
				rem = ((n1[b1 - i] - 48) + (n2[b2 - i] - 48) + rem) / 10;
			}
			else
			{
				r[size_r - (i + 1)] = ((n1[b1 - i] - 48) + (n2[b2 - i] - 48) + rem) + 48;
				rem = 0;
			}
			k = size_r - (i + 1);
			if (b1 - (i + 1) < 0 )
			{
				if (rem > 0)
				{
					if (size_r - (i + 2) < 0)
					{
						return (0);
					}
					else
					{
						r[size_r - (i + 1) - 1] = rem + 48;
						k = size_r - (i + 1) - 1;
					}
				}
			}
		}
	}
	if (k > 0)
	{
		for (i =0; i< size_r - k;i++)
		{
			r[i] = r[k + i];
			r[k + i] = 0;
		}
	}
	return (r);
}
