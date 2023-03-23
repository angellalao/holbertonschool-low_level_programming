#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: name of array
 * @size: the number of elements in the array "array"
 * @cmp: pointer to function to be used too compare values
 * Return: returns index of the first element for which cmp function
 * does not return 0. If no element maches, return -1,
 *  if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		if ((cmp)(array[i]) == 0)
		{
			i = i + 1;
		}
		else
		{
			return (i);
		}
	}
	return (-1);
}
