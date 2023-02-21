#include <stdio.h>

/**
 * main - print all combinations of single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		if (num < '9')
		{
			putchar(num);
			putchar(',');
			putchar(' ');
			num++;
		}
		else
		{
			putchar(num);
			num++;
		}
	}

	return (0);
}
