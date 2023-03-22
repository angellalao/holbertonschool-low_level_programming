#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of person
 * @f: pointer to a function, which takes a pointer to  a char
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(f)(name);
}
