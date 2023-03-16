#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - Write a function that creates an array of integers
 * @min: lowest integer in array
 * @max: highest integer in array
 * Return: pointer to array of integers from min to max
 */
int *array_range(int min, int max)
{
	int i;
	int j;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(*array) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	i = min;
	j = 0;
	while (i <= max)
	{
		array[j] = i;
		j = j + 1;
		i = i + 1;
	}
	return (array);
}
