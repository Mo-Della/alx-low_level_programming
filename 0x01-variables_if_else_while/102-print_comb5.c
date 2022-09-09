#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a, c;

	for (a = 0; a < 100; a++)
	{
		for (c = 0; c < 100; c++)
		{
			if (c > a)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((c / 10) + '0');
				putchar((c % 10) + '0');
				if (a != 98)
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
