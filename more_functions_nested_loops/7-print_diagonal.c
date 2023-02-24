#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: how many rows the line will travel across
 */
void print_diagonal(int n)
{
	int line;
	int s;

	line = 0;
	if (n > 0)
	{
		while (line < n)
		{
			s = 0;
			while (s < line)
			{
				_putchar(' ');
				s = s + 1;
			}
			_putchar('\\');
			_putchar('\n');
			line = line + 1;
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
