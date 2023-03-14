#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: NULL or pointer to copied string
 */
char *_strdup(char *str)
{
	char *newstring;
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	newstring = malloc(sizeof(char) * (i + 1));
	j = 0;
	while (j <= i)
	{
		newstring[j] = str[j];
		j = j + 1;
	}
	return (newstring);
}
