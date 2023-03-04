#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: name of array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;
	int e = n - 1;

	while (i != e && i < e)
	{
		tmp = a[e];
		a[e] = a[i];
		a[i] = tmp;
		i = i + 1;
		e = e - 1;
	}
}
