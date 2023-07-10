#include "main.h"


/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The array of chars size
 * @c: The character to initiat the chars with
 * Return: pointer to the array, or NULL if it fails
 */


char *create_array(unsigned int size, char c)
{
	char *char_arr;
	int i;

	if (size == 0)
		return (NULL);

	char_arr = malloc((char) * size);
	for (i = 0; i < size ; i++)
	{
		char_arr[i] = c ;
	}

	return (char_arr);
}
