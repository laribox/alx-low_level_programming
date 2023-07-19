#include "function_pointers.h"

/**
  * int_index - function that search for value
  * in an array
  * @array: ...
  * @size: Size of the array
  * @cmp: function to search
  *
  * Return: ...
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && cmp)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}

	return (-1);
}
