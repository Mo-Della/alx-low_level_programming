#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = '0'; digit <= '9', digit1++)
	{
		for (digit2 = '0'; digit <= '9', digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');
		}
		putchar(',');
		putchar(' ');
	}
	
	return (0);
}
