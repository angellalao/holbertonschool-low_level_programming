#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - Write a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n characters of s2 to be concatenated to s1
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	ptr = malloc(sizeof(s1) + (sizeof(char) * n));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i = i + 1;
	}
	j = 0;
	while (s2[j] != '\0' && j < n)
	{
		ptr[i] = s2[j];
		j = j + 1;
		i = i + 1;
	}
	ptr[i] = '\0';
	return (ptr);
}
