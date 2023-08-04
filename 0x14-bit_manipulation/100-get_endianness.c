#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte_ptr = (unsigned char *)&num;

	return ((*byte_ptr == 1) ? 1 : 0);
}
