#include<stdio.h>
/*
 * main:
 *
 * Return: (0)
 */
int main()
{
	int inttype;
	float floattype;
	double doubletype;
	char chartype;

	/*Outputs size of each integer*/
	printf("Size of integer: %d bytes\n", sizeof(inttype));
	printf("Size of float: %d bytes\n", sizeof(floattype));
	printf("Size of double float: %d bytes\n", sizeof(doubletype));
	printf("Size of char: %d bytes/n", sizeof(chartype));

	return (0);
}
