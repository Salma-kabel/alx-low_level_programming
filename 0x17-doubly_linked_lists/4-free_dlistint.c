#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: head of linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
