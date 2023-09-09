#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: pointer to hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int i, j = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			if (j == 0)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				j = 1;
			}
			else
				printf(", '%s': '%s'", ptr->key, ptr->value);
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
