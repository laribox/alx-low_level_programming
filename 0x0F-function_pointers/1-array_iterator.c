#include "function_pointers.h"

/**
 * array_iterator - Function the execute a pointer
 * function on each elements of the array 
 *
 * @array: array 
 * @size: Size of the array
 * @action: Function pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
