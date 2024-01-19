#include "sort.h"
/**
 * bubble_sort - sort arr lements frm the min to max value
 * @array: arr
 * @size: arr size
 */
void bubble_sort(int *array, size_t size)
{

	size_t ix, idx, temp = 0;

	if (size < 2)
		return;
	for (ix = 0; ix < size; ix++)
		for (idx = 0; idx < size; idx++)
		{
			if (array[idx] > array[idx + 1] && array[idx + 1])
			{
			temp = array[idx];
			array[idx] = array[idx + 1];
			array[idx + 1] = temp;
			print_array(array, size);
			}
		}
}
