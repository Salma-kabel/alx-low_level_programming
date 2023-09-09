#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to hash table
 * @key: key of value
 * @value: value to add
 * Return: 1 if success 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *cpyvalue, *cpykey;
	unsigned long int idx;
	hash_node_t *ptr;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	cpyvalue = strdup(value);
	if (cpyvalue == NULL)
		return (0);
	cpykey = strdup(key);
	if (cpykey == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[idx];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, cpykey) == 0)
		{
			free(ptr->value);
			ptr->value = cpyvalue;
			free(cpykey);
			return (1);
		}
		ptr = ptr->next;
	}
	ptr = malloc(sizeof(hash_node_t));
	if (ptr != NULL)
	{
		ptr->key = cpykey;
		ptr->value = cpyvalue;
		ptr->next = ht->array[idx];
		ht->array[idx] = ptr;
		return (1);
	}
	free(cpyvalue);
	free(cpykey);
	return (0);
}
