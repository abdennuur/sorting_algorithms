#include "sort.h"

/**
 * swp_ints - Swap 2 given ints
 * @a: First int
 * @b: Second int
 */

void swp_ints(int *a,int *b)
{
	int temp;
	temp = *a; 
	*a = *b;
	*b = temp;
}
