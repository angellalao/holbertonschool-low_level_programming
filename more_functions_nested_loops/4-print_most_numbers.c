#include "main.h"

/**
 * print_most_numbers - print numbers 0-9 except 2,4
 */
void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n >= '0' && n <= '9' && n != '2' && n != '4')
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
