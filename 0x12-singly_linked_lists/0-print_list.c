#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	int i, length = 0;

	for (i = 0; h != NULL; i++)
	{
		length++;
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}
		h = h->next;
	}
	return (length);
}
