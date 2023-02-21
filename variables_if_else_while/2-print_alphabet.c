#include <stdio.h>
/*
 * main - Entry point
 *
 * Return: 0
 *
 */

int main(void)
{
	char alph;

	while (alph >= 'a' && alph <= 'z')
	{
	putchar(alph);
	alph = alph + 1;
	}

	return (0);
}
