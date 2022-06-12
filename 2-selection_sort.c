#include "sort.h"
/**
 * selection_sort-Write a function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: input
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int min_pos = i;
	
		for (int j = i + 1; j < size; j++)
			if (array[j] < array[min_pos])
				min_pos = j;
		if (min_pos != i)
		{
			int temp = array[i];
	
			array[i] = array[min_pos];
			array[min_pos] = temp;
		}
		print_array(array, size);
	}
}
