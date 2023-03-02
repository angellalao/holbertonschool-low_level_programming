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
 * rev_string - print string in reverse
 * @s: string
 */
void rev_string(char *s)
{
	int len;
	int t;
	int c;

	len = _strlen(s) - 1;
	c = 0;
	while (len != c)
	{
		t = s[c];
		s[c] = s[len];
		s[len] = t;
		c = c + 1;
		len = len - 1;
	}

}
