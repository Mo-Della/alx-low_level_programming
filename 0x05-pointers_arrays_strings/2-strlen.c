#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: integer
 * Return: len at integer
 */
int _strlen(char *s)
{
	int len;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
