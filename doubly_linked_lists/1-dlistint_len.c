#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked dlistint_t list
 * @h: pointer to beginning of list
 * Return: number of elements (size_t)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	if (h == NULL)
	{
		return (0);
	}

	size = 0;
	while (h != NULL)
	{
		h = h->next;
		size = size + 1;
	}
	return (size);
}
