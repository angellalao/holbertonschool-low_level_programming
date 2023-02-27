#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
 * rev_string - print string in reverse
 * @s: string
 */
void rev_string(char *s)
{
	int len;

	len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len = len - 1;
	}
}
