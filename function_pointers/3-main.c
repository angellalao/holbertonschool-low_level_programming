#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints calculation between 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
