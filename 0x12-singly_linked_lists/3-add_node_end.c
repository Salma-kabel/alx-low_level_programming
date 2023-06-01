#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: pointer to list head
 * @str: string to duplicate
 * Return: pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *list;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		list = *head;
		while (list->next != NULL)
		{
			list = list->next;
		}
		list->next = node;
	}
	return (*head);
}
