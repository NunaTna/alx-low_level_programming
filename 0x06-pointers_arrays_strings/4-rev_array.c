#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: array
 * @n: number of elemets of the array
 * Return: reverse
 */
void reverse_array(int *a, int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		n--;
		b = a[a];
		a[a] = a[n];
		a[n] = b;
	}
}
