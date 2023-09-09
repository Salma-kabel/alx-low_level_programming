#include "hash_tables.h"



char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *ptr;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	ptr = ht->array[idx];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
