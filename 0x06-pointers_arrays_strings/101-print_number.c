#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: integer
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}

	num = n;

	if ((num / 10)
		print_number(num / 10);

	putchar((num % 10) + '0')
}
