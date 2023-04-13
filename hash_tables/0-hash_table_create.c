#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size == 0)
	{
		return (NULL);
	}
	table = malloc(sizeof(*table));
	if (table == NULL)
	{
		return (NULL);
	}
	table->array = malloc(sizeof(*(table->array)) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		table->array[i] = NULL;
		i = i + 1;
	}
	table->size = size;
	return (table);
}
