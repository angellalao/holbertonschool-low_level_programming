#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers up to 98
 *
 * @n: starting number
 */
void print_to_98(int n)
{
	int neg;

	while (n <= 98)
	{
		neg = (-1 * n);
		if (n < 0 && n != 98)
		{
			printf("%d, ", neg);
		}
		else if (n >= 0 && n != 98)
		{
			printf("%d, ", n);
		}
		else if (n == 98)
		{
			printf("%d", n);
		}
		n = n + 1;
	}
	printf("\n");
}
