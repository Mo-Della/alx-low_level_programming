#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Lucy";
	my_dog.age = 3.0;
	my_dog.owner = "Della";
	print_dog(&my_dog);
	return (0);
}
