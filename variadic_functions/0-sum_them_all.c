#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: the last fixed argument in the variadic function
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}
	va_start(ptr, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum = sum + va_arg(ptr, int);
		i = i + 1;
	}
	va_end(ptr);
	return (sum);
}
