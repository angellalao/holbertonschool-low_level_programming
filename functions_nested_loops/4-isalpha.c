#include "main.h"
/**
 * _isalpha - return 1 if upper or lowercase letter
 * @c: character to be tested
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
