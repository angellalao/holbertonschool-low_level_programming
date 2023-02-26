#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: height by width of triangle
 */
void print_triangle(int size)
{
	int b;
	int h;
	int r;

	r = 0;
	if (size > 0)
	{
		while (r < size)
		{
			b = 1;
			while (b < (size - r))
			{
				_putchar(' ');
				b = b + 1;
			}
			h = size;
			while (h <= (size + r))
			{
				_putchar('#');
				h = h + 1;
			}
			_putchar('\n');
			r = r + 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
