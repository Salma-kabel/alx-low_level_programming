#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index index of a dlistint_t linked list.
 * @head: head of linked list
 * @index: position of node to delete
 * Return: 1 if success -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *ptr2;

	ptr = *head;
	if (index == 0 && ptr != NULL)
	{
		if (ptr->next != NULL)
			ptr->next->prev = NULL;
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (index > 0 && ptr != NULL)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		index--;
	}
	if (index != 0 || ptr == NULL)
		return (-1);
	ptr2->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;
	free(ptr);
	return (1);
}
