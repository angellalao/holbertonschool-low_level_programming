#include "main.h"

/**
 * _puts - prints string, followed by newline
 * @str: string
 */
void _puts(char *str)
{
	int c;

	c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c = c + 1;
	}
	_putchar('\n');
}
