#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first string that will be concatenated to
 * @src: second string to concatenate to first string
 * Return: (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k = 0;

	while (dest[i] != '\0') /*finds '\0' position */
	{
		i = i + 1;
	}
	while (src[k] != '\0') /*starts src string from there */
	{
		dest[i] = src[k];
		i = i + 1;
		k = k + 1;
	}
	dest[i] = '\0'; /*set '\0' at the end*/
	return (dest);
}
