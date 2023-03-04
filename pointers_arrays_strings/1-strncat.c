#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: first string to be concatenated to
 * @src: second string to concatenate to first
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	while (src[k] != '\0' && k < n)
	{
		dest[i] = src[k];
		k = k + 1;
		i = i + 1;
	}
	if (k >= n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
