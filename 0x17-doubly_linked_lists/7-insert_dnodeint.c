#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of linked list
 * @idx: position to add the node
 * @n: value to add
 * Return: new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *new, *ptr2;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	else
	{
		while (idx > 0 && ptr != NULL)
		{
			ptr2 = ptr;
			ptr = ptr->next;
			idx--;
		}
		if (idx != 0)
			return (NULL);
		if (ptr != NULL)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			ptr2->next = new;
			new->prev = ptr->prev;
			new->next = ptr;
			ptr->prev = new;
		}
		else
		{
			new = add_dnodeint_end(h, n);
		}
	}
	return (new);
}
