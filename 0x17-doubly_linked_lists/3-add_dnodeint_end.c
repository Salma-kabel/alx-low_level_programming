#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at
 * the end of a dlistint_t list.
 * @head: head of linked list
 * @n: value to add
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		new->prev = NULL;
	else
	{
		ptr = (*head);
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		new->prev = ptr;
	}
	return (new);
}
