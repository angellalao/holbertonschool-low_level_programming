#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to unsigned long int (number to be changed)
 * @index: index location of bit to be changeed
 * Return: 1 if worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(*n) * 8))
	{
		return (-1);
	}

	i = 1;
	i = i << index;
	*n = *n | i;
	return (1);
}
