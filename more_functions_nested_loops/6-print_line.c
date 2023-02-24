#include "main.h"

/**
 * print_line - prints line as long as 'n'
 */
void print_line(int n)
{
	int t;

	if (n > 0)
	{
		t = 0;
		while (t <= n)
		{
			_putchar('_');
			t = t + 1;
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
