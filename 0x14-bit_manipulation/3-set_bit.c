#include "main.h"

/**
 * set_bit - function that sets the value of a bit
 *					to 1 at a given index.
 * @n: Pointer to number of which to manipulate bit.
 * @index: Index of bit to be manipulated.
 * Return: 1 if successful, -1 if not.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitwiseMask;

	if (index < 64)
	{
		bitwiseMask = 1 << index;
		*n = bitwiseMask | *n;
		return (1);
	}
	return (-1);
}
