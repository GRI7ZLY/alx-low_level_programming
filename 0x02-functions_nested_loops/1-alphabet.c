#include "main.h"

/**
 * main - I hope it works
 *
 * description: printing the alphabet
 *
 * return: always 0
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
