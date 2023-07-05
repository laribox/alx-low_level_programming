#include "main.h"

/**
 * wildcmp - Compares two strings to check if they are identical.
 * @s1: First string pointer.
 * @s2: Second string pointer.
 * Return: 1 if identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0)
	{
		if (*s2 != 0 && *s2 == '*')
			return (wildcmp(s1, ++s2));
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		if (*s1 == 0 && *s2 == 0)
			return (1);
		else
			return (wildcmp(++s1, ++s2));
	}
	else
	{
		return (0);
	}
}

