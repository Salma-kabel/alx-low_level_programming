#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 *
 * @s: pointer
 * @to: char
 */

void set_string(char **s, char *to)
{
	int i;

	for (i = 0; *s[i] != '\0'; i++)
	{
		*s[i] = to[i];
	}
}

