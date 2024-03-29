#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: value associated with the element, or NULL if
 * key can't be found. (pointer to char)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			value = node->value;
			return (value);
		}
		node = node->next;
	}
	return (NULL);
}
