#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr, *ptr2;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			ptr2 = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = ptr2;
		}
	}
	free(ht->array);
	free(ht);
}
