#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1;

	for (digit1 = 48; digit1 <= 57; digit1++)
		{
			putchar(digit1);
			if (digit1 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}

	putchar('\n');	
	return (0);
}
