#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each
 * element of at array
 * @array: pointer to array of ints.
 * @size: size of the array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}
	i = 0;
	while (i < size)
	{
		(action)(array[i]);
		i = i + 1;
	}
}
