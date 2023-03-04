#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: string to be copied over
 * @src: string to be copied
 * @n: number of chars to be copied from src
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int k = 0;

	while (src[k] != '\0' && k < n)
	{
		dest[i] = src[k];
		i = i + 1;
		k = k + 1;
	}
	while (dest[i] != '\0' && i < n)
	{
		dest[i] = '\0';
		i = i + 1;
	}
	return (dest);
}
