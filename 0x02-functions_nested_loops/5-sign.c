#include "main.h"
/**
 * print_sign - function to check for the sign of a number
 *@n: Is the int we use for the argument of the function
 *Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}