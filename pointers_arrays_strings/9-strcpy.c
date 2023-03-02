#include "main.h"

/**
 * *_strcpy - copies string pointed to by src, to the buffer
 * pointed to by dest
 * @dest: string copied to here
 * @src: points to the string
 * Return: dest value
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	c = 0;
	while (src[c] != '\0')
	{
		*dest = *src;
		src = src + 1;
		dest = dest + 1;
	}
	return (dest);
}
