#include "main.h"

/**
 * *string_toupper - changes all lowercase letters in string
 * to uppercase
 * @str: string to be changed
 * Return: str
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i = i + 1;
	}
	return (str);
}
