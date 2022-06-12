#include "sort.h"

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

		if (size < 2)
			break;
	}
}
