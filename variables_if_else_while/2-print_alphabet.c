#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 *
 */

int main(void)
{
	char alph = 'a';

	while (alph >= 'a' && alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');

	return (0);
}
