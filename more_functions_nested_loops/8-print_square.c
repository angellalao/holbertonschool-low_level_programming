#include "main.h"
/**
 * print_square - print square the size of int size
 * @size: size of the square
 */
void print_square(int size)
{
	int length;
	int row;

	length = 0;
	row = 0;
	if (size > 0)
	{
		while (row < size)
		{
			while (length < size)
			{
				_putchar('#');
				length = length + 1;
			}
			_putchar('\n');
			row = row + 1;
			length = 0;
		}
	}
	else
	{
		_putchar('\n');
	}
}
