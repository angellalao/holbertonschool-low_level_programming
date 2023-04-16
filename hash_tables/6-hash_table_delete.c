#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	i = 0;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);

		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
