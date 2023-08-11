#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main entiry
 *
 * description: Gamed
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive number\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative number\n", n);
	return (0);
}
