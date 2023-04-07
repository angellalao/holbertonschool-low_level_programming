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
	dlistint_t *new;
	dlistint_t *temp;
	dlistint_t *temp2;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	temp = *h;
	while (i < (idx - 1))
	{
		if (temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		i = i + 1;
	}
	temp2 = temp->next;
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(&temp, n));
	}
	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	temp->next = new;
	temp2->prev = new;
	new->prev = temp;
	new->next = temp2;
	return (new);
}
