#include "lists.h"

/**
 * sum_listint - Sums of all the data (n) of a
 * listint_t linked list.
 * @head: head of linked list
 * Return: sum of all data of the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
