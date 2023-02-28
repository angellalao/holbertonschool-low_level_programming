#include "main.h"

/**
 * puts2 - prints every other character of string, starting with
 * first character, followed by newline
 * @str: string
 */
void puts2(char *str)
{
	int a;
	int c;

	c = 0;
	a = (c % 2);

	while (a == 1 && (str[c] != '\0'))
	{
		_putchar(str[c]);
		c = c + 1;
	}
	_putchar('\n');
}
