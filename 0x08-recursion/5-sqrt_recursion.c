#include "main.h"

int helper_function(int x, int y);
/**
 * _sqrt_recursion - find natural square root of a number
 * @n: Integer to check
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	return (helper_function(1, n));

}

/**
 * helper_function - help to find if there is a root number
 * @x: Incremental value to reach the square root
 * @y: value of n
 * Return: Root or -1
 */
int helper_function(int x, int y)
{
	if (y == x * x)
	{
		return (x);
	}
	else if (y < x * x)
	{
		return (-1);
	}
	else
	{
		return (helper_function(x + 1, y));
	}
}
