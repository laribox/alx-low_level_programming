#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be examined.
 * @accept: Pointer to accepted characters of substring.
 * Return: Returns number of bytes in initial segment of s,
 * consisting only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	len = strspn(s, accept);
	return (len);
}
