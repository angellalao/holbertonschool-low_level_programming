#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alph;

	alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph = alph + 1;
	}

	_putchar('\n');

}
