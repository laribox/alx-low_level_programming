#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: Integer
 * Return: factorial n
 */
int factorial(int n)
{
	return (n + factorial(n - 1));
}
