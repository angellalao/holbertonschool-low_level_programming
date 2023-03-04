#include "main.h"

/**
 * _strpbrk - searched a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string to match
 * Return: first bytes from s that matches a byte from accept
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			else
				j = j + 1;
		}
		i = i + 1;
	}
	return ('\0');
}
