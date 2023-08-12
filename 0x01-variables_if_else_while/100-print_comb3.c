#include <stdio.h>

/**
 * main - main
 *
 * Description: This is the single-digit numbers only
 *
 * Return: always 0
 */

int main(void)
{
	int w, x;

	for (w = 48; w <= 56; w++)
	{
		for (x = 49; x <= 57; x++)
		{
			if (x > w)
			{
				putchar(w);
				putchar(x);
				if (w != 56 || x != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
