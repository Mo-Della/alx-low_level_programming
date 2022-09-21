#include "main.h"
#include <stdio.h>
/**
 * _strncpy - checks the code
 * @dest: variable
 * @src: variable
 * @n: integer
 * Return: concatinated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; ++i)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
