#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: array to be printed
 * @left: first number of the array
 * @right: last number of the array
 */
void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		printf("%d", array[left]);
		if (left != right)
		{
			printf(", ");
		}
		left = left + 1;
	}
	printf("\n");
}
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: index in the array that the value is found at, or -1 if value
 * not present, or array == NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left;
	size_t right;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}
	i = 0;
	left = i;
	right = size - 1;
	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (value == array[mid])
		{
			return ((int)mid);
		}
		if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
