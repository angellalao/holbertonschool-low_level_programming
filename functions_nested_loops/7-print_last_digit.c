#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @d: the number to be inputted
 * Return: the last digit
 */

int print_last_digit(int d)
{
	int l;

	l = d % 10;

	if (d < 0)
	{
		l = -1 * l;
		_putchar(l);
	}
	else
	{
		_putchar(l);
	}

	return (l);

}
