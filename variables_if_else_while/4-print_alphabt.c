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

	if (alph <= 'z' && alph != 'q' && alph != 'e')
	{
		putchar(alph);
		alph++;
	}
	else
	{
		putchar('\n');
	}

	return (0);
}
