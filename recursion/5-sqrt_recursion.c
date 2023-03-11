#include "main.h"

/**
 * sq_root - helper function to find natural square root of number
 * @n: number
 * @root: starting number to find root
 * Return: square root or -1 if square root doesnt exist
 */

int sq_root(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	else if (root * root > n)
	{
		return (-1);
	}
	return (sq_root(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: number
 * Return: square root or -1 if square root doesnt exist
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sq_root(n, 1));
}
