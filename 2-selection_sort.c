#include "sort.h"

/**
 * swp_ints - Swp 2 ints in an array.
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
 * selection_sort - Sort array of ints in ascending order
 *                  using selection sort algorithm.
 * @array: array of ints.
 * @size: size of the arr.
 *
 * Description: Print array after each swp.
 */
void selection_sort(int *array, size_t size)
{
	int *mn;
	size_t ix, ji;

	if (array == NULL || size < 2)
		return;

	for (ix = 0; ix < size - 1; ix++)
	{
		mn = array + ix;
		for (ji = ix + 1; ji < size; ji++)
			mn = (array[ji] < *mn) ? (array + ji) : mn;

		if ((array + ix) != mn)
		{
			swp_ints(array + ix, mn);
			print_array(array, size);
		}
	}
}
