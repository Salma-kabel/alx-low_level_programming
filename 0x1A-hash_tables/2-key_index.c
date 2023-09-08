#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 * @size: size of array of hash table
 * @key: key to find index for
 * Return: the index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = hash_djb2(key) % size;

	return (idx);
}
