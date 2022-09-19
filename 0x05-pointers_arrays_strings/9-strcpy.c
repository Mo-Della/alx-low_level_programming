#include "main.h"
#include "string.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: parameter
 * @src: parameter
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b]; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = src[b];
	return (dest);
}
