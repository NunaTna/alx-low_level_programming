#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: array
 * @n: number of elemets of the array
 * Return: reverse
 */
void reverse_array(int *a, int n)
{
	int c;
	int d;

	for (c = 0; c < n; c++)
	{
		n--;
		d = a[c];
		a[c] = a[n];
		a[n] = d;
	}
}
