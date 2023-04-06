#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: a pointer to a pointer to the begining of a list
 * @n: value to be added to the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
