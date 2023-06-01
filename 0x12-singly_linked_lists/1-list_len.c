#include "lists.h"

/**
 * list_len - checks the number of elements in list
 * @h: list
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	int i, length = 0;

	for (i = 0; h != NULL; i++)
	{
		length++;
		h = h->next;
	}
	return (length);
}
