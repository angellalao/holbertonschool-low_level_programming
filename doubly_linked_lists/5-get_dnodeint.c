#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the first node of the linked list
 * @index: index of the node to be returned
 * Return: address of nth node, or NULL if node doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr;

	if (head == NULL)
	{
		return (NULL);
	}
	i = 0;
	ptr = head;
	while (ptr->next != NULL)
	{
		if (i == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		i = i + 1;
	}
	return (NULL);
}
