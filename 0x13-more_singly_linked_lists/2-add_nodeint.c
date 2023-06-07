#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * of a listint_t list.
 * @head: head of list
 * @n: integer
 * Return: pointer to node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->n = n;
	p->next = *head;
	*head = p;
	return (*head);
}
