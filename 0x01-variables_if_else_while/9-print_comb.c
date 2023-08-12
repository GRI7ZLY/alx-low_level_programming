#include <stdio.h>

/**
 * main - main
 *
 * description: This is the single digit numbers only
 *
 * Return: always 0
 */

int main(void)
{
	for (int i = 0; i < 10; i++){

	printf("%d", i);
	if (i != 9){
		putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
