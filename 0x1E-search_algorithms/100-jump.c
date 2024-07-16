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

    while (prev < size && array[prev] < value)
    {
        printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
        if (array[jump] >= value || jump >= size)
            break;
        prev = jump;
        jump += sqrt(size);
    }

    printf("Value found between indexes [%ld] and [%ld]\n", prev, jump);

    for (i = prev; i < size && i <= jump; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}

