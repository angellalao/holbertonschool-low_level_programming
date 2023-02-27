#include "main.h"

/**
 * print_rev - print string in reverse, followed by newline
 * @s: string
 */
void print_rev(char *s)
{
	int len;
	int c;

	len = _strlen(s);
	c = 0;

	while (s[c] != '\0')
	{
		_putchar(s[len]);
		len = len - 1;
		c = c + 1;
	}
	_putchar('\n');
}
