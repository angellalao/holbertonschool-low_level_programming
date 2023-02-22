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
	int lc = 1;
	int Uc = 0;

	if (c >= 'a' && c <= 'z')
	{
		_putchar(lc);
	}
	else
	{
		_putchar(Uc);
	}

	return (0);

}
