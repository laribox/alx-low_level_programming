#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: Integer to be printed.
 *

 */
void print_number(int n)
{
	unsigned int integer = 0;

	if (n < 0)
	{
		integer = n * -1;
		_putchar('-');
	}
	else
	{
		integer = n;
	}

	if (integer / 10)
	{
		print_number(integer / 10);
	}
	_putchar((integer % 10) + '0');
}
