#include "main.h"

/**
 * times_table - print a 9 times table
 */

void times_table(void)
{
	int r; /*mulitplication row number*/
	int c; /*multiplication column number*/
	int p; /* product of r & c */

	r = 0;
	c = 0;

	while (r < 10)
	{
		while (c < 10)
		{
			p = (r * c);
			if (p < 10 && c != 0)
			{
				_putchar(' ');
				_putchar(p + '0');
			}
			else if (p < 10 && c == 0)
			{
				_putchar(p + '0');
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			c = c + 1;
		}
		_putchar('\n');
		r = r + 1;
		c = 0;
	}
}
