#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: (s) pointer to char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
		{
			s = s + 1;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
