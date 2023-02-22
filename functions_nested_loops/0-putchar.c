#include "main.h"

/**
 * main -
 *
 * Return: 0
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;
	i = 0;

	while (i <= 7)
	{
		_putchar(word[i]);
	}

	_putchar('\n');
	
      	return (0);
}
