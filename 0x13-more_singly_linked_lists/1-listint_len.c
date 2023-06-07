#include "lists.h"

/**
 * listint_len - checks the number of elements in
 * a linked listint_t list.
 * @h: pointer to struct
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
