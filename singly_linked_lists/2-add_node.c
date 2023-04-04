#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to a pointer to list_t
 * @str: a pointer to a string, to be stored in new node
 * Return: address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (head != NULL && str != NULL)
	{
		ptr = malloc(sizeof(*ptr));
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr->str = strdup(str);
		ptr->len = strlen(str);
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	return (NULL);
}
