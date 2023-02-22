#include "main.h"

/**
 * _islower - return 1 if lowercase, 0 if otherwise
 *
 * @c: character to be checked
 *
 * Return: 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}

	return (0);

}
