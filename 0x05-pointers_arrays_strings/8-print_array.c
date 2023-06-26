#include "main.h"
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: array of integers
 * @n: integer 
 */
void print_array(int *a ,int n)
{
	int i;

	for (i = 0 ; i < n; ++i)
	{
		if (i > 9)
			_putchar((a[i] / 10) + '0');
		_putchar((a[i] % 10) + '0');
		_putchar('\n');
	}
}
