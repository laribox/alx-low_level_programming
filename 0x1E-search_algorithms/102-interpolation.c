#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * print_value_checked - Prints the value checked during search.
 * @pos: The position being checked in the array.
 * @value: The value at the position in the array.
 * @out_of_range: Flag indicating if the position is out of range.
 *
 * Description: Prints the value at the current position being checked.
 * If the position is out of range, it prints that information.
 */
void print_value_checked(size_t pos, int value, int out_of_range)
{
	if (out_of_range)
		printf("Value checked array[%ld] is out of range\n", pos);
	else
		printf("Value checked array[%ld] = [%d]\n", pos, value);
}

/**
 * calculate_position - Calculates the probe position for interpolation search.
 * @low: The lower bound index of the current search range.
 * @high: The upper bound index of the current search range.
 * @value: The value being searched for.
 * @array: A pointer to the first element of the array to search.
 *
 * Return: The calculated probe position.
 *
 * Description: Uses the interpolation formula to calculate the position
 * to check based on the value being searched for.
 */
size_t calculate_position(size_t low, size_t high, int value, int *array)
{
	return (low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low])));
}

/**
 * interpolation_search - Searches for a value
 * in a sorted array using interpolation search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located,
 * or -1 if value is not present or array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, pos, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}
		pos = calculate_position(low, high, value, array);
		if (pos >= size)
		{
			print_value_checked(pos, 0, 1);
			return (-1);
		}
		print_value_checked(pos, array[pos], 0);
		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	if (low <= high)
	{
		pos = calculate_position(low, high, value, array);

		if (pos < size)
			print_value_checked(pos, array[pos], 0);
		else
			print_value_checked(pos, 0, 1);
	}

	return (-1);
}

