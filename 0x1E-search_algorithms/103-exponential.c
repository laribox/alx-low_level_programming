nclude "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an array between two indices.
 * @array: The array to print.
 * @left: The left index.
 * @right: The right index.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i > left)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @left: The left index of the subarray to search.
 * @right: The right index of the subarray to search.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if value is not
 * present or array is NULL.
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the exponential search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if value is not
 * present or array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	size_t left = bound / 2;
	size_t right = bound < size ? bound : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	return (binary_search(array, left, right, value));
}
