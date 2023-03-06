#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a newline
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i = i + 1;
	}
	_putchar('\n');
}
