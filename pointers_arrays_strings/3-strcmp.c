#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: (tmp)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int k = 0;
	int tmp = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] > s2[k])
		{
			tmp = tmp + 1;
		}
		else if (s1[i] < s2[k])
		{
			tmp = tmp - 1;
		}
		/*else if (s1[i] == s2[k])*/
		i = i + 1;
		k = k + 1;

	}
	return (tmp);
}
