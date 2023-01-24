#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: The array to sort the integers from
 * @size: The size of the array
 *
 * Return: The sorted elements of the array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

/**
 * swap - swaps two integers
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Nothing
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
