#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the key to get the index of
 * @size: size of the array of hash table
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash_val;

	if (key == NULL)
	{
		return (0);
	}
	if (size == 0)
	{
		return (0);
	}
	hash_val = hash_djb2(key);
	index = hash_val % size;
	return (index);
}
