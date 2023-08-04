#include "main.h"

/**
 * flip_bits - Gets the number of bits to be
 *		flipped to convert n to m.
 * @n: First number.
 * @m: Second number.
 * Return: Number of bits to be flipped to make n into m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, counter = 0;

	i = n ^ m;
	while (i > 0)
	{
		counter++;
		i = i & (i - 1);
	}
	return (counter);
}
