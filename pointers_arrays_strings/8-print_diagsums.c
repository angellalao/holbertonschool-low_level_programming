#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: The matrix of integers
 * @size: The size of the matrix of intigers
 */
void print_diagsums(int *a, int size)
{
	int index = 0, sum1 = 0, sum2 = 0;

	while (index < size)
	{
		sum1 = sum1 + a[index];
		a = a + size;
		index = index + 1;
	}

	a = a - size;
	index = 0;

	while (index < size)
	{
		sum2 = sum2 + a[index];
		a = a - size;
		index = index + 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
