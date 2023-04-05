#include <stdio.h>
#include "main.h"

/**
 * is_binary - check if char is not 0 and not 1
 * @ch: char to be checked
 * Return: 0 if char is not 0 and not 1, else return 1
 */
int is_binary(char ch)
{
	if (ch != '0' && ch != '1')
	{
		return (0);
	}
	return (1);
}

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary number to be converted (pointer to string of 1 and 0 chars)
 * Return: the converted number (unsigned int)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int c;

	c = 0;
	num = 0;
	while (b[c] != '\0')
	{
		if (is_binary(b[c]) == 0)
		{
			return (0);
		}
		num = num << 1;
		if (b[c] == '1')
		{
			num = num | 1;
		}
		c = c + 1;
	}
	return (num);
}
