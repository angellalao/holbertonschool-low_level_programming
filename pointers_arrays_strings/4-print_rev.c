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
 * print_rev - print string in reverse, followed by newline
 * @s: string
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);

	while (len >= 0)
	{
		_putchar(s[len]);
		len = len - 1;
	}
	_putchar('\n');
}
