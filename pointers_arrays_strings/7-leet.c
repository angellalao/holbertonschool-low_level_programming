#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: str
 */
char *leet(char *str)
{
	int k;
	int i;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};

	k = 0;
	while (str[k] != '\0')
	{
		i = 0;
		while (a[i] != '\0')
		{
			if (str[k] == a[i] || str[k] == a[i] - 32)
			{
				str[k] = n[i] + '0';
			}
			i = i + 1;
		}
		k = k + 1;
	}
	return (str);
}
