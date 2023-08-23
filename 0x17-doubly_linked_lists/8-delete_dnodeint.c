#include "lists.h"



int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *ptr2;

	ptr = *head;
	while (index > 0 && ptr != NULL)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		index--;
	}
	if(index != 0 || ptr == NULL)
		return (-1);
	ptr2->next = ptr->next;
	ptr->next->prev = ptr->prev;
	free(ptr);
	return (1);
}
