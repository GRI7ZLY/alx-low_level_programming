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
	for (int i = 0; i < 100; i++)
	{
		if (i / 10 < i % 10)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

