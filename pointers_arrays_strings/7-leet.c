#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: str
 */
char *leet(char *str)
{
	int i = 0;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};

	while (str[i] != '\0')
	{
		if (str[i] == a[i] || str[i] == a[i] - 32)
		{
			str[i] = (n[i] + '0');
		}
		i = i + 1;
	}
	str[i] = '\0';
	return (str);
}
