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
 * puts_half - prints half a string, followed by newline
 * @str: string to be inputted
 */
void puts_half(char *str)
{
	int count;
	int len;
	int num;

	count = 0;

	while (str[count] != '\0')
	{
		len = _strlen(str);
		num = (len % 2);
		if (num == 0)
		{
			count = (len / 2);
			/*_putchar(str[count]);*/
			while (count < len)
			{
				_putchar(str[count]);
				count = count + 1;
			}
		}
		else if (num == 1)
		{
			count = ((len + 1) / 2);
			/*_putchar(str[count]);*/
			while (count < len)
			{
				_putchar(str[count]);
				count = count + 1;
			}
		}
		_putchar('\n');
	}
}
