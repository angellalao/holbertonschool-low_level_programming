#include "main.h"

/**
 * *cap_string - capitalises all words of a string
 * @str: string
 * Return:str
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i = i + 1;
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
		}
		i = i + 1;
	}
	return (str);
}
