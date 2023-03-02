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

/**
 * *_strcpy - copies string pointed to by src, to the buffer
 * pointed to by dest
 * @dest: string copied to here
 * @src: points to the string
 * Return: dest value
 */
char *_strcpy(char *dest, char *src)
{
	int c;
	int len;

	len = _strlen(src);
	c = 0;
	while (c <= len)
	{
		dest[c] = src[c];
		c = c + 1;

	}
	if (*src == '\0')
	{
		*dest = '\0';
	}
	return (dest);
}
