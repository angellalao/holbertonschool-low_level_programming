#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index - location of bit we want to get
 * Return: value of bit at index, or -1 if error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	i = 0;
	while (i < index)
	{
		n = n >> 1;
		i = i + 1;
	}
	return (n & 1);
}
