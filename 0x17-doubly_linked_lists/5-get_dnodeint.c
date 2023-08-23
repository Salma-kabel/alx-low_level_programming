#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list.
 * @head: head of linked list
 * @index: number of the node to get
 * Return: the node or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;

	ptr = head;
	while (index > 0 && pre != NULL && ptr->next != NULL)
	{
		ptr = ptr->next;
		index--;
	}
	if (index == 0)
		return (ptr);
	else
		return (NULL);
}
