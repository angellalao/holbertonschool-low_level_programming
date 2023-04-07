#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to a linked list
 * @idx: the index of the list where the node should be added
 * @n: data to be added to node
 * Return: the address of the new node or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr;
	dlistint_t *temp;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (idx == 0)
	{
		return (add_dnodeint(&temp, n));
	}
	temp = *h;
	while (i < idx)
	{
		if (temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		i = i + 1;
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(&temp, n));
	}
	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->prev = temp->prev;
	ptr->next = temp;
	temp->prev = ptr;
	return (ptr);
}
