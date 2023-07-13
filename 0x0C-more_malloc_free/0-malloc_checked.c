#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: Size to allocate
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
