#include "hash_tables.h"

/**
 * hash_table_get - gets a value associated with a key.
 * @ht: pointer to hash table
 * @key: key to get value for
 * Return: value for the key or null if failed
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *ptr;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
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
