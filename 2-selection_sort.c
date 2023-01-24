#include "sort.h"

/**
 * selection_sort - Sorts an array of integers using selection algorithm
 * @array:  The array to sort the elements from
 * @size: The size of the array
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_index;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_index])
				min_index = j;

		if (i != min_index)
		{
			swap(&array[min_index], &array[i]);
			print_array(array, size);
		}
	}
}

/**
 * swap - Swaps two values
 * @a: The first integer
 * @b: The second integer
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
