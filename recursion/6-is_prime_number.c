#include "main.h"

/**
 * prime_helper - check if num is prime number
 * @num: number to be checked
 * @div: check if number is divisible by number
 * Return: 1 if prime number, otherwise 0.
 */
int prime_helper(int num, int div)
{
	if (num < 2)
	{
		return (0);
	}
	if ((num % div == 0) && (div < num))
	{
		return (0);
	}

	if (div == num)
	{
		return (1);
	}
	return (prime_helper(num, div + 1));
}

/**
 * is_prime_number - checks if input integer is a prime number
 * @n: input integer
 * Return: 1 if prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}
