#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: pointer to struct
 * @n: integer
 * Return: pointer to node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->n = n;
	p->next = NULL;
	while (*head != NULL)
	{
		*head = (*head)->next;
	}
	*head = p;
	return (*head);
}
