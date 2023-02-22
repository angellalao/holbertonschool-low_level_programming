#include "main.h"

/**
 * main - print _putchar
 *
 * Return: 0
 */

int main(void)
{
	char word[8] = "_putchar";
	int i = 0;

	while (i <= 7)
	{
		_putchar(word[i]);
		i = i + 1;
	}

	_putchar('\n');
	return (0);
}
