#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 *
 * @format: format of arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0, n = 0;
	char *s;
	va_list list;

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				n = 0;
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				n = 0;
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				n = 0;
				printf("%f", va_arg(list, double));
				break;
			case 's':
				n = 0;
				s = va_arg(list, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				n = 1;
				break;
		}
		print(n, format[i + 1]);
		i++;
	}
	printf("\n");
	va_end(list);
}

/**
 * print - print after arguments
 *
 * @n: integer
 * @format: character
 */

void print(int n, char format)
{
	switch (n)
	{
		case 0:
			if (format == '\0')
			{
				break;
			}
			printf(", ");
			break;
		default:
			break;
	}
}
