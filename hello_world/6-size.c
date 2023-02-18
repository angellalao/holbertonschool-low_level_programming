#include<stdio.h>

/**
 * main - this is the main description
 *
 * Return: (0)
 */
int main(void)
{
	int inttype;
	float floattype;
	long int longinttype;
	long long int longlonginttype;
	char chartype;

	/*Outputs size of each integer*/
	printf("Size of a char: %d byte(s)\n", sizeof(chartype));
	printf("Size of an int: %d byte(s)\n", sizeof(inttype));
	printf("Size of a long int: %d byte(s)\n", sizeof(longinttype));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlonginttype));
	printf("Size of a float: %d byte(s)\n", sizeof(floattype));

	return (0);
}
