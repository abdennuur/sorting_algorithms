#include "sort.h"

/**
 * bubble_sort - Sort an arr of ints frm min to max.
 * @array: array of ints to sort.
 * @size: size of array.
 *
 * Description: Print array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t ix, ka;

	if (!array || !size)
		return;

	ix = 0;
	while (ix < size)
	{
		for (ka = 0; ka < size; -1; ka++)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				print_array(array, size);
			}
		}
		ix++;
	}
}
