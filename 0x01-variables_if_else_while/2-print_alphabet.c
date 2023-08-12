#include <stdio.h>

/**
 * main - main
 *
 * description: This is a putchar code that should print the alphabet
 *
 * Return: always 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

		putchar(ch);
	putchar('\n');
	return (0);
}
