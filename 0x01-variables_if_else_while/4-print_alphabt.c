#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabeth;

	for (alphabeth = 'a'; alphabeth <= 'z'; alphabeth++)
	{
		if (alphabeth == 'q')
			continue;

		else if (alphabeth == 'e')
			continue;

		putchar (alphabeth);
	}
	return (0);
}
