#include <stdio.h>
/**
 * main - print single digit base 10 numbers
 *
 * Return: 0
 *
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		num++;
	}

	printf("\n");

	return (0);
}
