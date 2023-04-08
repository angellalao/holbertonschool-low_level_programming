#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to unsigned long it (number to be changed)
 * @index: position of bit to be changed
 * Return: 1 if worked, -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(*n) * 8))
	{
		return (-1);
	}

	if (((*n >> index) & 1) == 0)
	{
		return (1);
	}

	i = 1;
	i = i << index;
	*n = *n & ~i;
	return (1);
}
