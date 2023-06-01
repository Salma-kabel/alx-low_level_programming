#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: head of list
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
