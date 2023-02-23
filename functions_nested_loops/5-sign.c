#include "main.h"

/**
 * print_sign - checks if number is positive/negative or 0.
 * @n: number to be checked
 * Return: 0 if positive or 0, 1 if negative
 */

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n < '0')
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
