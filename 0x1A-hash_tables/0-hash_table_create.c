#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_t - creates a hash table
 * @size: size of hash table array
 * Return: pointer to hash table or null if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t) * size);
	if (ht->array == NULL)
		return (NULL);
	return (ht);
}
