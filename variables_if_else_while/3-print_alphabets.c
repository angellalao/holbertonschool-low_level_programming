#include <stdio.h>
/**
 * main - print lowercase then upper case letters followed by newline
 *
 * Return: 0
 *
 */
int main(void)
{
	char lc = 'a';
	char uc = 'A';

	while (lc <= 'z');
	putchar(lc);
	lc++;

	while (uc <= 'Z');
	putchar(uc);
	uc++;

	putchar('\n');

	return (0);
}
