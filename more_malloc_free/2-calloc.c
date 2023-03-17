#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - Write a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size in bytes of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(size * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (size * nmemb))
	{
		array[i] = 0;
		i = i + 1;
	}
	return (array);
}
