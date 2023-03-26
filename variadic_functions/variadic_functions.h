#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

/**
 * struct type - struct used to match operator with correlating function
 * @op: string representation of the operator
 * @f: function pointer for the operation to be used
 */
typedef struct type
{
	char *op;
	void (*f)(va_list ptr);
} type;

void print_int(va_list ptr);
void print_char(va_list ptr);
void print_str(va_list ptr);
void print_float(va_list ptr);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* #ifndef _VARIADIC_FUNCTIONS_H_ */
