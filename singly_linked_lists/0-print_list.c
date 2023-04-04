#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements (nodes) in list_t
 * @h: head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size;

	if (h == NULL)
	{
		return (0);
	}

	size = 0;
	while (h != NULL)
	{
		if  (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		size = size + 1;
	}
	return (size);
}
