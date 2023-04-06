#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to list
 * Return: number of nodes (size_t)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size;

	if (h == NULL)
	{
		return (0);
	}

	size = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size = size + 1;
	}
	return (size);
}
