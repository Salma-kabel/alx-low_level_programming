#include "main.h"
#include <stdio.h>



char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, c;
	char *f;

	for (i = 0; n1[i] != '\0'; i++)
	{
		if (n2[i] == '\0')
		{
			c = 1;
		}
		else if (n1[i + 1] == '\0')
		{
			if (n2[i + 1] == '\0')
			{
				c = 0;
			}
			else
			{
				c = 2;
			}
		}
	}
	if (c == 1 || c == 0)
	{
		f = add(n1, n2, r, size_r, c);
	}
	else
	{
		f = add(n2, n1, r, size_r, c);
	}
	return (f);
}



char *add(char *n1, char *n2, char *r, int size_r, int c)
{
	int i, rem = 0, j;
	for (i = 0; n1[i] != '\0'; i++)
	{
		if (i == size_r)
		{
			r[0] = '0';
			r[1] = '\0';
			break;
		}
		if (((n1[i] - 48) + (n2[i] - 48) + rem) > 9)
		{
			r[i] = (((n1[i] - 48) + (n2[i] - 48) + rem) % 10) + 48;
			rem = ((n1[i] - 48) + (n2[i] - 48) + rem) / 10;
		}
		else
		{
			printf("n1= %d  n2= %d\n",(n1[i] - 48),(n2[i] - 48));
			r[i] = ((n1[i] - 48) + (n2[i] - 48) + rem) + 48;
			rem = 0;
		}
		if (n2[i + 1] == '\0' && (c == 1 || c == 2))
		{
			for (j = i + 1; n1[j] != '\0'; j++)
			{
				if (j == size_r)
				{
					r[0] = '0';
					r[1] = '\0';
					break;
				}
				if ((n1[j] - 48) + rem > 9)
				{
					r[j] = (((n1[j] - 48) + rem) % 10) + 48;
					rem = ((n1[j] - 48) + rem) / 10;
				}
				else
				{
					r[j] = ((n1[j] - 48) + rem) + 48;
				}
				if (n1[j + 1] == '\0')
					if (rem > 0)
						r[j + 1] = rem + 48;
			}
			break;
		}
		if (n1[i + 1] == '\0')
		{
			if (rem > 0)
				r[i + 1] = rem + 48;
			break;
		}
	}
	return (r);
}
