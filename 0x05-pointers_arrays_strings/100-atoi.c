#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert from string to int
 * Return: A integer
 */
int _atoi(char *s)
{
	int i, num = 0;

	for (i = 0 ; i < (int)strlen(s) ; ++i)
	{
		if (s[i] == '-')
		{
			num *= -1;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = num * 10 + (s[i] - '0');
		}
	}
	return (num);
}
