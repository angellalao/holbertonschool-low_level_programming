#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - returns string length
 * @str: string
 * Return: string length
 */
int str_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

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
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = str_len(s1);
	len2 = str_len(s2);
	if (n > len2)
	{
		n = len2;
	}
	ptr = malloc(sizeof(*ptr) * (len1 + n + 1));
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
