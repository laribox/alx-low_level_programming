#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: Old mem size
 * @new_size: New mem size
 * Return: Array pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem;
	unsigned int x = new_size;

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	mem = malloc(new_size);
	if (mem == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		x = old_size;
	}

	memcpy(mem, ptr, x);
	free(ptr);
	return (mem);

}
