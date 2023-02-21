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

	while (alph <= 'z')
	{
		if (alph != 'e' || alph != 'q')
		{
			putchar(alph);
	       	}
		alph++;
	}

	putchar('\n');

	return (0);
}
