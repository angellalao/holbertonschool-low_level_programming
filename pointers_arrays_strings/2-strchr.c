#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: (s) pointer to char
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i = i + 1;
		return (s + i);
	}
	return ('\0');
}
