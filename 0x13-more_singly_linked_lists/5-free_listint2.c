#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *p, *p2;

	if (head == NULL)
		return;
	p = *head;
	while (p != NULL)
	{
		p2 = p->next;
		free(p);
		p = p2;
	}
	*head = NULL;
}
