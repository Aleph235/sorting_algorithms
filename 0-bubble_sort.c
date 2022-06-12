#include "sort.h"
/**
 * bubble_sort- a function that sorts an array of integers
 *@array: input
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int swp;
for (i = 0; i < size; i++)
{
	for (j = 0; j < size - 1 - i; j++)
	{
		if (array[j] > array[j + 1])
		{
			swp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = swp;
		}
	}
	print_array(array, size);

}
}
