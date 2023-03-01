#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a newline
 * @a: array to be printed
 * @n: number of elements of an array to be printed
 */
void print_array(int *a, int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		if (c == (n - 1))
		{
			printf("%d", a[c]);
		}
		else if (c < n)
		{
			printf("%d, ", a[c]);
		}
		c = c + 1;
	}
	printf("\n");
}
