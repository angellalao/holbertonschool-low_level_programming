#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int c;

	i = (n ^ m);
	c = 0;
	while (i > 0)
	{
		if ((i & 1) == 1)
		{
			c = c + 1;
		}
		i = i >> 1;
	}
	return (c);
}
