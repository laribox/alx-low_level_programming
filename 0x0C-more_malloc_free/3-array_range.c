#include "main.h"

/**
 * array_range - Function that creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: Array pointer
 */

int *array_range(int min, int max)
{
	int  *array;
	int len = max - min + 1, i;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(len * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		array[i] = min + i;
	}
	return (array);

}
