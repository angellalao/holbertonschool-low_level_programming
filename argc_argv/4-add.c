#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * check_dig - checks if all arguments are digits
 * @argv: arguments
 * Return: 0 or 1
 */

int check_dig(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (isdigit(a[i]) == 0)
		{
			return (1);
		}
		i = i + 1;
	}
	return (0);
}

/**
 * main - program that adds positive numbers
 * @argc: count of arguments
 * @argv: arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int c;
	int num;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	c = 1;
	num = 0;
	while (c < argc)
	{
		if (check_dig(argv[c]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		num = num + atoi(argv[c]);
		c = c + 1;
	}
	printf("%d\n", num);
	return (0);
}
