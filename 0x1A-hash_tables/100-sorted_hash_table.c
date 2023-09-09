#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - creates a hash table with a sorted linked list
 * @size: size of hash table array
 * Return: pointer to hash table or null if failed
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i = 0;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: pointer to hash table
 * @key: key of value
 * @value: value to add
 * Return: 1 if success 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	char *cpyvalue, *cpykey;
	unsigned long int idx;
	shash_node_t *ptr, *ptr2;

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
	ptr = malloc(sizeof(shash_node_t));
	if (ptr == NULL)
	{
		free(cpyvalue);
		free(cpykey);
		return (0);
	}
	ptr->key = cpykey;
	ptr->value = cpyvalue;
	ptr->next = ht->array[idx];
	ht->array[idx] = ptr;
	if (ht->shead == NULL)
	{
		ptr->sprev = NULL;
		ptr->snext = NULL;
		ht->shead = ptr;
		ht->stail = ptr;
	}
	else if (strcmp(ht->shead->key, cpykey) > 0)
	{
		ptr->sprev = NULL;
		ptr->snext = ht->shead;
		ht->shead->sprev = ptr;
		ht->shead = ptr;
	}
	else
	{
		ptr2 = ht->shead;
		while (ptr2->snext != NULL && strcmp(ptr2->snext->key, cpykey) < 0)
			ptr2 = ptr2->snext;
		ptr->sprev = ptr2;
		ptr->snext = ptr2->snext;
		if (ptr2->snext == NULL)
			ht->stail = ptr;
		else
			ptr2->snext->sprev = ptr;
		ptr2->snext = ptr;
	}
	return (1);
}

/**
 * shash_table_get - gets a value associated with a key.
 * @ht: pointer to hash table
 * @key: key to get value for
 * Return: value for the key or null if failed
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *ptr;

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

/**
 * shash_table_print - prints a hash table.
 * @ht: pointer to hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht == NULL)
		return;
	printf("{");
	ptr = ht->shead;
	while (ptr != NULL)
	{
		if (ptr == ht->stail)
			printf("'%s': '%s'", ptr->key, ptr->value);
		else
			printf("'%s': '%s', ", ptr->key, ptr->value);
		ptr = ptr->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse order.
 * @ht: pointer to hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht == NULL)
		return;
	printf("{");
	ptr = ht->stail;
	while (ptr != NULL)
	{
		if (ptr == ht->shead)
			printf("'%s': '%s'", ptr->key, ptr->value);
		else
			printf("'%s': '%s', ", ptr->key, ptr->value);
		ptr = ptr->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table.
 * @ht: pointer to hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *ptr, *ptr2;

	if (ht == NULL)
		return;
	ptr = ht->shead;
	while (ptr != NULL)
	{
		ptr2 = ptr->snext;
		free(ptr->key);
		free(ptr->value);
		free(ptr);
		ptr = ptr2;
	}
	free(ht->array);
	free(ht);
}
