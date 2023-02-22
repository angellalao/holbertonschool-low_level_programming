#include "main.h"

/**
 * main - print lower case alphabet 10 times
 *
 *
 */

void print_alphabet_x10(void)
{
	int i;

	i = '0';

	while (i <= 9)
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

	i = i + 1;

}
