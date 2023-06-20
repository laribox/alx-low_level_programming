#include <ctype.h>
int print_sign(int n);
/**
 * print_sign - check n is positive or negative
 *@n: Number
 * Return: 1 if positive 0 if zero  and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
