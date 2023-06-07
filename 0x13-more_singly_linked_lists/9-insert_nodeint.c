#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a
 * given position.
 * @head: head of linked list
 * @idx: position to add node
 * @n: integer
 * Return: pointer to node if success, NULL otherwise
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (*head == NULL)
	{
		node->next == NULL;
		(*head) = node;
		return (*head);
	}
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (*head);
	}
	idx--;
	while (idx != 0)
	{
		*head = (*head)->next;
		idx--;
		if (*head == NULL)
			break;
	}
	if (idx == 0)
	{
		node->next = (*head)->next;
		(*head)->next = node;
		return (node);
	}
	else
	{
		free(node);
		return (NULL);
	}
}

