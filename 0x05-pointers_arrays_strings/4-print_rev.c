#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: integer
 */
void print_rev(char *s)
{
	int i;
	int a;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	i--;

	for (a = 0; a <= i; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
