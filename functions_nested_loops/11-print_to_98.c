#include "main.h"

/**
 * print_to_98 - print natural numbers up to 98
 *
 * @n: starting number
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n < 10)
		{
			_putchar(n + '0');
		}
		else if (n >= 10)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
		n = n + 1;
	}
}
