#include <stdio.h>
/**
 * main - print alphabet except 'q' and 'e'
 *
 * Return: 0
 *
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z' && alph != 'q' && alph != 'e')
	{
	putchar(alph);
	alph++;
	}

	if (alph = 'z')
	{
	putchar('\n');
	}

	return (0);
}
