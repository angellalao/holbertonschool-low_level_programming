#include "main.h"

/**
 * more_numbers - print (0-14) 10 times
 *
 */
void more_numbers(void)
{
	int n;
	int r;

	r = 0;
	while (r < 10)
	{
		n = 0;
		while (n <= 14)
		{
			_putchar((n % 10) + '0');
			n = n + 1;
			if (n >= 10 && n <= 14)
			{
				_putchar((n / 10) + '0');
			}
		}
		_putchar('\n');
		r = r + 1;
	}
}
