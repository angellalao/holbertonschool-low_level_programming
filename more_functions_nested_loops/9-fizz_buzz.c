#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 0-100, words replace numbers that are multiples
 * of 3, 5 and 15
 * Return: 0
 */
int main(void)
{
	int num;

	num = 1;
	while (num <= 100)
	{
		if (((num % 3) == 0) && ((num % 5) != 0))
		{
			printf("Fizz ");
		}
		else if (((num % 5) == 0) && ((num % 3) != 0))
		{
			printf("Buzz ");
		}
		else if (((num % 3) == 0) && ((num % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", num);
		}
		num = num + 1;
	}
/*	printf("\n"); */
	return (0);
}
