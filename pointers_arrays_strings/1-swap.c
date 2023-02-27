#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a: integer 1
 * @b: integer 2
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
