
#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints ten times the numbers
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0;  x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar(10);
	}
}
