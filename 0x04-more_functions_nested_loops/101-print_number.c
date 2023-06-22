#include "main.h"
/**
 * printDigit - Print an integer.
 * @digit: Integer that need to be printed.
 */
void printDigit(int digit)
{
	_putchar(digit + '0');
}

/**
 * print_number - Print an integer.
 * @n: Integer that need to be printed.
 */
void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		i *= -1;
		_putchar('-');
	} 	
	if (i > 999999999)
	{
		printDigit((i / 10000000000) % 10);
	}
	if (i > 99999999)
	{
		printDigit((i / 100000000) % 10);
	}
	if (i > 9999999)
	{
		printDigit((i / 10000000) % 10);
	}
	if (i > 999999)
	{
		printDigit((i / 1000000) % 10);
	}
	if (i > 99999)
	{
		printDigit((i / 100000) % 10);
	}
	if (i > 9999)
	{
		printDigit((i / 10000) % 10);
	}
	if (i > 999)
	{
		printDigit((i / 1000) % 10);
	}
	if (i > 99)
	{
		printDigit((i / 100) % 10);
	}
	if (i > 9)
	{
		printDigit((i / 10) % 10);
	}
	printDigit(i % 10);
}
