#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: integer
 * @n: integer
 * Return: 0
 */
void print_array(int *a, int n)
{
	int b;

	if (n > 0)
	{
		for (b = 0 ; n > b; b++)
		{
			if (b != n - 1)
			{
				printf("%d, ", a[b]);
			}
			else
			{
				printf("%d", a[b]);
			}
		}
	}
	printf("\n");
}
