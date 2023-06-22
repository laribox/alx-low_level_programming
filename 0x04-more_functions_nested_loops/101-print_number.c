#include "main.h"
/**
 * printDigit - Print an integer.
 * @digit: Integer that need to be printed.
 */
void printDigit(int digit)
{
	putchar(digit + '0');
}

/**
 * print_number - Print an integer.
 * @n: Integer that need to be printed.
 */
void print_number(int n)
{
	int i;

	if (n > 999999999)
	{
		printDigit((n / 10000000000) % 10);
	}
	if (n > 99999999)
	{
		printDigit((n / 100000000) % 10);
	}
	if (n > 9999999)
	{
		printDigit((n / 10000000) % 10);
	}
	if (n > 999999)
	{
		printDigit((n / 1000000) % 10);
	}
	if (n > 99999)
	{
		printDigit((n / 100000) % 10);
	}
	if (n > 9999)
	{
		printDigit((n / 10000) % 10);
	}
	if (n > 999)
	{
		printDigit((n / 1000) % 10);
	}
	if (n > 99)
	{
		printDigit((n / 100) % 10);
	}
	if (n > 9)
	{
		printDigit((n / 10) % 10);
	}
	printDigit(n % 10);
}
