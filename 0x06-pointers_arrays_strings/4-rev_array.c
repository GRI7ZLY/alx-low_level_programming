#include "main.h"

/**
 * reverse_array - reverses an array
 *
 * @a: array to reverse
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int x;
	int r;

	for (x = 0; x < n / 2; x++)
	{
		r = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = r;
	}
}
