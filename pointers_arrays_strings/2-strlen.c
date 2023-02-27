#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: 0
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c = c + 1;

	return (c);
}
