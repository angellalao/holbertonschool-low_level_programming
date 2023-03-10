#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - write a program that multiplies 2 numbers
 * @argc: count of arguments
 * @argv: arguments
 * Return: int. 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = (i * j);

	printf("%d\n", k);
	return (0);
}
