#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %i is %i ", n, (n % 10));

	if ((n % 10) > 5)
	{
		printf("and is greater than 5\n");
	} else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("and is less than 6 and not 0\n");
	} else
	{
		printf("and is 0\n");
	}

	return (0);
}
