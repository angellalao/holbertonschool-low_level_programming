#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head;
	int com;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	i = 0;
	com = 0;
	while (i < ht->size)
	{
		head = ht->array[i];
		while (head != NULL)
		{
			if (com == 1)
			{
				printf(", ");
			}
			com = 1;
			printf("'%s': '%s'", head->key, head->value);
			head = head->next;

		}
		i = i + 1;
	}
	printf("}\n");
	return;
}
