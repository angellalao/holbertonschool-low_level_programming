#include "main.h"

/**
 * times_table - print a 9 times table
 *
 */

void times_table(void)
{
	int n;
	int m;

	n = 0;
	m = 0;

	while (m < 10)
	{
		while (n < 10)
		{
			_putchar((n * m) + '0');

			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			n = n + 1;
		}
		_putchar('\n');
		m = m + 1;
		n = 0;
	}

}
