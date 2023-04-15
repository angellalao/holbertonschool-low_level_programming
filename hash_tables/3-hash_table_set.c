#include "hash_tables.h"

/**
 * make_node - creates new node
 * @key: key of node
 * @value: value stored in new node
 * Return: pointer to new node, or 0 if failure
 */
hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	return (new_node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: name of hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (key == NULL)
	{
		return (0);
	}
	if (ht == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	new_node = make_node(key, value);
	if (new_node == NULL)
	{
		return (0);
	}
	if (ht->array[index] != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			ht->array[index]->value = (char *)value;
			return (1);
		}
	}
	new_node->next =  ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
