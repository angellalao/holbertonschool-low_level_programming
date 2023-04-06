#include <stdlib.h>
1;95;0c#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to a list_t
 * @str: pointer to string that will be stored as a value in the node
 * Return: the address of the the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(*temp));
		if (temp == NULL)
		{
			return (NULL);
		}
		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = NULL;
		if (*head == NULL)
		{
			*head = temp;
		}
		else
		{
			ptr = *head;
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = temp;
		}
		return (temp);
	}
	return (NULL);
}
