#include <stdio.h>
#include "main.h"

/**
 * main - write a program that prints all arguments it receives
 * @argc: count of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i = i + 1;
	}
	return (0);
}
