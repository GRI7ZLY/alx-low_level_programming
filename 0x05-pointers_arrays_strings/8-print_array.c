#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array.
 * @a: pointer to an integer
 * @n: number of elements of an array.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x == (n - 1))
		{
			break;
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}
