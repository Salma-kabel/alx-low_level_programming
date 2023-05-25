#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 *
 * @separator: used to separate string
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list list;

	va_start(list, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);
		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
		else if (i == n - 1)
		{
			printf("\n");
		}
	}
	va_end(list);
}
