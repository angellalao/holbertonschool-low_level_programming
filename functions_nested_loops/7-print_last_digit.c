#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @d: the number to be inputted
 * Return: the last digit
 */

int print_last_digit(int d)
{

	if (d < 0)
	{
		_putchar(-(d % 10));
		return (-(d % 10));
	}
	else
	{
		_putchar(d % 10);
		return (d % 10);
	}

}
