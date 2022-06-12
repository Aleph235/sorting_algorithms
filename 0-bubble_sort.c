#include "sort.h"
#include <stdbool.h>

/**
 * swap - swaps two integers
 * @xp: pointer to int x
 * @yp: pointer to int y
 * Return: void
 */
void swap(int *xp, int *yp)
{
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}
/**
 * bubble_sort - sort array with buble algorithm
 * @array: given array
 * @size: array's size
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
			}
		}

		if (size < 2 || swapped == false)
		{
			print_array(array, size);
			break;
		}
	}
}
