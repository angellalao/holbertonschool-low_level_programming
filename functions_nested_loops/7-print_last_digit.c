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

	_putchar(l);
	return (l);

}
