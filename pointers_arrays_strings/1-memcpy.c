#include "main.h"

/**
 * *_memcpy - copies a memory area
 * @dest: string to be copied over
 * @src: string to be copied
 * @n: number of chars to be copied
 * Return: (dest) pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}

	return (dest);

}
