#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index
 * index of a listint_t linked list.
 * @head: head of linked list
 * @index: position of node to delete
 * Return: 1 if success, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *p2;

	p = *head;
	if (p == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}
	index--;
	while (index != 0)
	{
		if (p->next == NULL)
			return (-1);
		p = p->next;
		index--;
	}
	p2 = p->next;
	p->next = p2->next;
	free(p2);
	return (1);
}
