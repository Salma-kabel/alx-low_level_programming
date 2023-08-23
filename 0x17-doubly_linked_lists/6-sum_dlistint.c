#include "lists.h"

/**
 * sum_dlistint - gets the sum of all the data (n) of a dlistint_t linked list.
 * @head: head of linked list
 * Return: sum of the data of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
