#include "main.h"

/**
 * print_number - Print an integer.
 * @n: Integer that need to be printed.
 */
void print_number(int n)
{
	unsigned int temp = 0;

	if (n >= 0)
	{
		temp = n;
	}
	else
	{
		temp = -n;
		_putchar('-');
	}
	if (temp / 10 > 0)
	{
		print_number(temp / 10);
	}
	_putchar((temp % 10) + 48);
}

