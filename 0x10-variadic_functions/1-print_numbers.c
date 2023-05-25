#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 *
 * @separator: operator used to separate numbers
 * @n: number of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
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
