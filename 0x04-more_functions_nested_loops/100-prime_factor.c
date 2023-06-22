#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 * Return: 0
 **/

int main(void)
{
	unsigned long int i, x;

	x = 612852475143;
	for (i = 3; i < 782849; i = i + 2)
	{
		while ((x % i == 0) && (x != i))
			x = x / i;
	}
	printf("%lu\n", x);
	return (0);
}
