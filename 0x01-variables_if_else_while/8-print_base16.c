#include <stdio.h>

/**
 * main - main
 *
 * description: This code should output the base 16
 *
 * Return: always 0
 */

int main(void)
{
	char w;

	for (w = '0'; w <= '9'; w++)
	putchar(w);
	for (w = 'a'; w <= 'f'; w++)
		putchar(w);
	putchar('\n');
	return (0);
}
