#include <main.h>

/**
 * swap_int - swaps the value of the integers
 * @a: integer to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b);
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
