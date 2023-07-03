#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: diagonal array
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum1 = 0, b, c;

	for (i = 0; i < size; i++)
	{
		b = (i * size) + i;
		sum += *(a + b);
		c = (i * size) + (size - i - 1);
		sum1 += *(a + c);
	}
	printf("%i, %i\n", sum, sum1);
}
