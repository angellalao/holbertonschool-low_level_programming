#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int num = '0';
	char alph = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (alph <= 'f')
	{
		putchar(alph);
		alph++;
	}

	putchar('\n');

	return (0);

}
