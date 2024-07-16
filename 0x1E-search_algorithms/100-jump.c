#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - searches for a value in a sorted array of integers using jump search
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: If no match return -1 else return target index
 */
int jump_search(int *array, size_t size, int value)
{
    size_t jump = sqrt(size);
    size_t prev = 0, i;

    if (array == NULL || size == 0)
        return (-1);

    while (array[jump - 1] < value)
    {
        printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
        prev = jump;
        jump += sqrt(size);
        if (prev >= size)
            return (-1);
    }

    printf("Value found between indexes [%ld] and [%ld]\n", prev, jump);

    for (i = prev; i < jump && i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
