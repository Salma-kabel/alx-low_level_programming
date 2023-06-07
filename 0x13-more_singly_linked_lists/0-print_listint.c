#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: pointer to struct
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
