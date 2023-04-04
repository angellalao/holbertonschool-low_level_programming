#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - retruns the number of elements in list_t
 * @h: head
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
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
