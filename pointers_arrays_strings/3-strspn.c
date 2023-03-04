#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string to match
 * Return: number of bytes in initial segment of s which consist of
 * only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count = count + 1;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (count);
}
