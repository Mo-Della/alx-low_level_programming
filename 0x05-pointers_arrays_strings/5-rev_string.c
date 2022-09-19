#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - function that reverses a string
 * @s: integer
 * Return: 0
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	int c;

	for (a = 0; s[a] != '\0'; a++)
	{
		continue;
	}
	a--;

	while (a > b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		b++;
		a--;
	}
}
