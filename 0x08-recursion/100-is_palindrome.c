#include "main.h"
int helper_function(char *x,int y, int z);
/**
 * is_palindrome - function that returns 1 if a string is a palindrome and 0 if not.
 * @s: String to check 
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	helper_function(s, 0, (int)strlen(s) - 1);

}

/**
 * helper_function - help to find if n is prime number
 * @x: Point to first element of String
 * @y: First index
 * @z: Second Index 
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */

int helper_function(char *x,int y, int z)
{
	if (x[y] == x[z])
	{
		if (y > z / 2)
		{
			return (1);
		}
		else
		{
			helper_function(x, y + 1, z - 1);
		}

	}else
	{
		return (0);
	}

}
