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
	int sizesrc;

	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	while (src[k] != '\0')
	{
		src[k] = dest[i];
		k = k + 1;
		i = i + 1;
	}

	sizesrc = sizeof(src[i]);
	if (sizesrc < n)
	{
		dest[i] = '\n';
	}

	return (dest);
}
