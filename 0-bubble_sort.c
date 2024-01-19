#include "sort.h"

/**
 * swp_ints - Swp 2 ints in array.
 * @a: first int to swap.
 * @b: second int to swap.
 */
void swp_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Sort an arr of ints frm min to max.
 * @array: array of ints to sort.
 * @size: size of array.
 *
 * Description: Print array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t ix, ln = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (ix = 0; ix < ln - 1; ix++)
		{
			if (array[ix] > array[ix + 1])
			{
				swap_ints(array + ix, array + ix + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		ln--;
	}
}
