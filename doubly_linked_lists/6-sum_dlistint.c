#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data(n) of a dlistint_t linked list
 * @head: pointer to the first node of the list
 * Return: sum of all data of linked list, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *ptr;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;
	sum = 0;
	while (ptr->next != NULL)
	{
		sum = sum + (ptr->n);
		ptr = ptr->next;
	}
	sum = sum + (ptr->n);
	return (sum);
}
