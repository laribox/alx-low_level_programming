#include "main.h"

/**
 * alloc_grid - ffunction that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: Array columns
 * @height: Array rows
 * Return: Pointer to the two dimension array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **two_dim_arra;

	two_dim_arra = malloc(sizeof(int *)  * height);

	if (height <= 0 || width <= 0 || two_dim_arra == NULL)
	{

		return (NULL);
	}


	for (i = 0; i < height; i++)
	{
		two_dim_arra[i] = malloc(sizeof(int) * width);
		if (two_dim_arra[i] == NULL)
		{
			for (; i >= 0 ; i--)
				free(two_dim_arra[i]);
			free(two_dim_arra);
			return (NULL);
		}

	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			two_dim_arra[i][j] = 0;
		}

	}

	return (two_dim_arra);

}
