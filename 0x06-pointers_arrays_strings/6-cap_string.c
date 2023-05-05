#include "main.h"

/**
 * *cap_string - Capitalizes all words of a string.
 *
 * @str: string
 *
 * Return: pointer to string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n')
			{
				str[i] = str[i] - 32;
			}
			else if (str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!')
			{
				str[i] = str[i] - 32;
			}
			else if (str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')')
			{
				str[i] = str[i] - 32;
			}
			else if (str[i - 1] == '}' || str[i - 1] == ',' || str[i - 1] == '?')
			{
				str[i] = str[i] - 32;
			}
			else if (str[i - 1] == '{' || i == 0)
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}

