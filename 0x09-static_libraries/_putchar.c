#include <unistd.h>

/**
 * _putchar: writes te character c to stdout
 * @c: character to print
 *
 * Return: On sucess 1
 * On error, -1 ia returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
