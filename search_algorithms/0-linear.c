#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}
