#include "main.h"
int helper_function(int x, int y, int z);

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	return (helper_function(1, n, 0));
}

/**
 * helper_function - help to find if n is prime number
 * @x: Incremental value to check for prime
 * @y: value of n
 * @z: counter
 * Return: natural 1 if prime or 0 if not
 */
int helper_function(int x, int y, int z)
{
	if (y >= x)
	{
		if (y % x == 0)
		{
			z++;
		}

		return (helper_function(x + 1, y, z));
	}
	else if (z == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
