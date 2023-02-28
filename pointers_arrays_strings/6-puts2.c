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
	while (str[c] != '\0')
	{
		a = (c % 2);
		if (a == 0)
		{
			_putchar(str[c]);
			c = c + 1;
		}
		else
		{
			c = c + 1;
		}

	}
	_putchar('\n');
}
