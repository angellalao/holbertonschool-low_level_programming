#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * linked list.
 * @head: pointer to a pointer to linked list
 * @index: position of node to be deleted
 * Return: 1 if success, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr, *prevnode;

	if (head == NULL)
	{
		return (-1);
	}
	ptr = *head;
	if (index == 0)
	{
		if (ptr == NULL)
		{
			return (-1);
		}
		*head = ptr->next;
		if (ptr->next != NULL)
		{
			ptr->next->prev = NULL;
		}
		free(ptr);
		ptr = NULL;
		return (1);
	}
	i = 0;
	while (i < index && ptr != NULL)
	{
		ptr = ptr->next;
		i = i + 1;
	}
	if (ptr == NULL)
	{
		return (-1);
	}
	prevnode = ptr->prev;
	prevnode->next = ptr->next;
	if (ptr->next != NULL)
	{
		ptr->next->prev = prevnode;
	}
	free(ptr);
	ptr = NULL;
	return (1);
}
