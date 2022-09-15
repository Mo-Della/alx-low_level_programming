#include <stdio.h>

/**
 * main - prints the largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	long number = 612852475143; div

	while (div < number / 2)
	{
		if (number % inc == 0)
		{
			number /= 2;
			continue;
		}

		for (div = 3; div < (number / 2); div += 2)
		{
			if (number % div == 0)
			{
				number /= div;
			}
		}

	}
	printf("%ld\n", number);
	return (0);
}
