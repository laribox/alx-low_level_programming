#include "main.h"

/**
 * get_bit - Function that returns the value of a
 *		bit at a given index
 * @n: Number
 * @index: Index of bit to get.
 * Return: Value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitwiseMask;

	if (index < 64)
	{
		bitwiseMask = 1 << index;
		if (n & bitwiseMask)
			return (1);
		else
			return (0);
	}
	return (-1);

}
