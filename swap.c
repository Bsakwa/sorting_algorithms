#include "sort.h"

/**
 * swap - Swaps two values
 * @a: The first value
 * @b; The second value
 * Return: Nothing
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
