#include <stdio.h>
#include "main.h"

/**
 * main - prints file name
 * @argc: number of command line arguments
 * @argv: argument values (argv[0] = program name)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
