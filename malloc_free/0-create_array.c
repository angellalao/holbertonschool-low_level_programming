#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it with a
 * specific char.
 * @size: size of the array
 * @c: character(s) to be set in array
 * Return: NULL or array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size);
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i = i + 1;
	}
	return (array);
}
