#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: beginning of list
 */

void free_listint(listint_t *head)
{
	listint_t *p;
	
	if (head == NULL)
		return;
	p = head->next;

	while (p != NULL)
	{
		free(head);
		head = p;
		p = head->next;
	}
	free(head);
}
