#include "main.h"

/**
 * main - print _putchar followed by new line
 *
 * return: always 0
 */

int main(void)
{
	char str[] = "_putchar";
	int x;
		for (x = 0;x < 8; x++)
		_putchar(str[x]);
		_putchar('\n');
		return (0);
}
