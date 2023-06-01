#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of list
 * @str: string to duplicate
 * Return: pointer to new list head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (*head);
}
