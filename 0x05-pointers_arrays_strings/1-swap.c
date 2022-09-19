#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: parameter, which is a pointer to a
 * @b: parameter, which is a pointer to b
 *
 * Returns void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
