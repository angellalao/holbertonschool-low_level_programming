#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a newline
 * @separator: the string to be printed between numbers
 * @n: the number of integers pssed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	unsigned int value;

	va_start(ptr, n);
	i = 0;
	while (i < n)
	{
		value = va_arg(ptr, unsigned int);
		printf("%d", value);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i = i + 1;
	}
	va_end(ptr);
	printf("\n");
}
