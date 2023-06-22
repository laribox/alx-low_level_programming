#include "main.h"
/**
 * print_number - print a number
 * @n: number to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n > 999999999) {
		printDigit((n / 10000000000) % 10);
	}
	if (n > 99999999) {
		printDigit((n / 100000000) % 10);
	}
	if (n > 9999999) {
		printDigit((n / 10000000) % 10);
	}
	if (n > 999999) {
		printDigit((n / 1000000) % 10);
	}
	if (n > 99999) {
		printDigit((n / 100000) % 10);
	}
	if (n > 9999) {
		printDigit((n / 10000) % 10);
	}
	if (n > 999) {
		printDigit((n / 1000) % 10);
	}
	if (n > 99) {
		printDigit((n / 100) % 10);
	}
	if (n > 9) {
		printDigit((n / 10) % 10);
	}
	printDigit(n % 10);
}

void printDigit(int digit) {
	_putchar(digit + '0');
}
