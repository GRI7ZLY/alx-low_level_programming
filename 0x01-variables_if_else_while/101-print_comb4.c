#include <stdio.h>

/**
 * main - main
 *
 * description: This is one of the last advanced tasks
 *
 * Return: always 0
 */

int main(void)
{
	int x = 0;
	int y, z;
	int count = 0;

	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (count != 119)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
				count++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
