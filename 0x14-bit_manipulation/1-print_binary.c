#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to convert to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int number = n;

	if (number > 1)
		print_binary(number >> 1);

	_putchar((number & 1) + '0');
}
