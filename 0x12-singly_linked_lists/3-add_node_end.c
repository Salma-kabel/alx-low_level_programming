#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: pointer to list head
 * @str: string to duplicate
 * Return: pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;
	while (*head->next != NULL)
	{
		*head = *head->next;
	}
	*head->next = node;
	return (*head->next);
}
