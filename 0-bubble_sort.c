#include "sort.h"

/**
 * swap_ints - Swap 2 ints in an array.
 * @a: The frst int to swap.
 * @b: The sec int to swap.
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Sort an array of ints in ascending order
 * @array: array of ints to sort
 * @size: size of array
 *
 * Description: Print array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t ix, ln = size;
	bool bubbl = false;

	if (array == NULL || size < 2)
		return;

	while (bubbl == false)
	{
		bubbl = true;
		for (ix = 0; ix < ln - 1; ix++)
		{
			if (array[ix] > array[ix + 1])
			{
				swap_ints(array + ix, array + ix + 1);
				print_array(array, size);
				bubbl = false;
			}
		}
		ln--;
	}
}
