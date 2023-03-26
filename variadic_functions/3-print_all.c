#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_int - print integer
 * @ptr: a va_list struct to process
 */
void print_int(va_list ptr)
{
	printf("%d", va_arg(ptr, int));
}

/**
 * print_float - prints a floating integer
 * @ptr: a va_list struct to process
 */
void print_float(va_list ptr)
{
	printf("%f", va_arg(ptr, double));
}

/**
 * print_char - prints a char
 * @ptr: a va_list struct to process
 */
void print_char(va_list ptr)
{
	printf("%c", va_arg(ptr, int));
}

/**
 * print_str - prints a string
 * @ptr: a va_list struct to process
 */
void print_str(va_list ptr)
{
	char *str = va_arg(ptr, char*);

	str == NULL ? printf("(nil)") : printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: a list of types of arguements passed to the function
 */
void print_all(const char * const format, ...)
{
	int i;
	int j;
	va_list ptr;

	type types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(ptr, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j].op != NULL)
		{
			if (*types[j].op == format[i])
			{
				(types[j].f)(ptr);
				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
			}
			j = j + 1;
		}
		i = i + 1;
	}
	va_end(ptr);
	printf("\n");
}
