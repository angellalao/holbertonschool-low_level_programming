#include "main.h"

/**
 * _isupper - return 1 if uppercase, 0 if lowercase
 * @c: letter to be checked
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
