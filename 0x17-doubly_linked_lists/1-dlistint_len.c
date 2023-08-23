#include "lists.h"

/**
 * dlistint_len - counts the number of
 * elements in a linked dlistint_t.
 * @h: head of linked list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->n;
	}
	return (count);
}
