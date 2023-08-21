#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * fcounter is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int fcounter = 0;
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		fcounter++;
	}

	for (y = (fcounter - 1); y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
