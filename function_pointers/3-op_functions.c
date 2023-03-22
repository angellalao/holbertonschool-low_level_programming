#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns sum of a and b
 * @a: first number
 * @b: second number
 * Return: sum (int)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: number to be subtracted from
 * @b: number to be subtracted
 * Return: (int) value of b subtracted from a
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a multiplied by b
 * @a: first number to be multiplied
 * @b: second number to be multiplied
 * Return: (int) product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns result of a divided by b
 * @a: number to by divided
 * @b: number to be divided by
 * Return: (int) result of division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns remainder of the division of a by b
 * @a: number to be divided
 * @b: number to divide by
 * Return: (int) remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
