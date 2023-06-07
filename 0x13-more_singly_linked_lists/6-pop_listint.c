#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of list
 * Return: data of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *p;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	p = *head;
	data = p->n;
	p = p->next;
	free(*head);
	*head = p;
	return (data);
}
