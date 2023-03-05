#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to be scanned
 * @needle: string to be searched
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			j = 0;
			while (haystack[i] == needle[j])
				{
					i = i + 1;
					j = j + 1;
					if (needle[j + 1] == '\0')
					{
						return (needle);
					}
				}
			i = i + 1;
		}
	}
	return ('\0');
}
