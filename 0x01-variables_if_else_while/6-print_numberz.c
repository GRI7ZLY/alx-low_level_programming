#include <stdio.h>

/**
 * main - main
 *
 * description: This is putchar code that should print the numbers zero to nine
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
		return (0);
}
