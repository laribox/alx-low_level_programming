#include "main.h"

/**
 * reverse_array - function that reverses the content of an 
 *	           array of integers.
 * @a: array
 * @n: array number of elements
 */

void reverse_array(int *a, int n);
{
	int i,j;

	for (i = 0; i < n ; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
		
	}
}
