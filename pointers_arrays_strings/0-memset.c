#include "main.h"

/**
 * *_memset - fills a memory with a constant byte
 * @s: string
 * @b: character/byte to replace memory
 * @n: number of bytes to be set
 * Return: (s) pointer to a char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i = i + 1;
	}
	return (s);
}
