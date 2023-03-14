#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - find string length
 * @str: string
 * Return: string length
 */
int str_len(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		c = c + 1;
	}
	return (c);
}
/**
 * *str_concat - Write a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *newstring;
	int i;
	int j;

	if (s1 == NULL && s2 == NULL)
	{
		return ("\n");
	}
	newstring = malloc(sizeof(char) * (str_len(s1) + str_len(s2)) + 1);
	i = 0;
	while (s1[i] != '\0')
	{
		newstring[i] = s1[i];
		i = i + 1;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		newstring[i] = s2[j];
		i = i + 1;
		j = j + 1;
	}
	newstring[i] = '\0';
	return (newstring);
}
