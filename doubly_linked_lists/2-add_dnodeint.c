#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to a pointer to the beginning of the list
 * @n: value to add to the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head != NULL)
	{
		new = malloc(sizeof(*new));
		if (new == NULL)
		{
			return (0);
		}
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		if (*head != NULL)
		{
			(*head)->prev = new;
		}
		*head = new;
		return (new);
	}
	return (NULL);
}
