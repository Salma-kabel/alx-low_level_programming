#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a
 * listint_t linked list.
 * @head: head of the linked list
 * @index: index of the node to find
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;

	if (head == NULL)
		return (NULL);
	
	p = head;
	while (index != 0)
	{
		p = p->next;
		if(p == NULL)
			break;
		index--;
	}
	if (index != 0)
		return (NULL);

	return (p);
}
