#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed into the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *value;

	va_start(ptr, n);
	i = 0;
	while (i < n)
	{
		value = va_arg(ptr, char*);
		if (value == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", value);
		}
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i = i + 1;
	}
	va_end(ptr);
	printf("\n");
}
