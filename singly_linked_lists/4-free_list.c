#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees/ releases the memory allocated for a list
 * @head: pointer to first node of the list to free
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		if (head->str != NULL)
		{
			free(head->str);
		}
		free(head);
	}
}
