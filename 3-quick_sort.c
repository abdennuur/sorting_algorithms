#include "sort.h"

void swp_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * swp_ints - Swap 2 ints in array.
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
 * lomuto_partition - Order subset of array of ints according to
 *                    lomuto partition scheme (lst elmnt as pivot).
 * @array: array of ints.
 * @size: size of array.
 * @left: starting index of subset to order.
 * @right: ending index of subset to order.
 *
 * Return: final partition index.
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pvt, abv, blw;

	pvt = array + right;
	for (abv = blw = left; blw < right; blw++)
	{
		if (array[blw] < *pvt)
		{
			if (abv < blw)
			{
				swp_ints(array + blw, array + abv);
				print_array(array, size);
			}
			abv++;
		}
	}

	if (array[abv] > *pvt)
	{
		swp_ints(array + abv, pvt);
		print_array(array, size);
	}

	return (abv);
}

/**
 * lomuto_sort - Implement quicksort algorithm through recursion.
 * @array: array of ints to sort.
 * @size: size of array.
 * @left: starting index of array partition to order.
 * @right: ending index of array partition to order.
 *
 * Description: Uses Lomuto partition scheme.
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int prt;

	if (right - left > 0)
	{
		prt = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, prt - 1);
		lomuto_sort(array, size, prt + 1, right);
	}
}

/**
 * quick_sort - Sort array of ints in ascending
 *              order using quicksort algorithm.
 * @array: array of ints.
 * @size: size of array.
 *
 * Description: Uses Lomuto partition scheme. Print
 *              array after each swp of 2 elements.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
