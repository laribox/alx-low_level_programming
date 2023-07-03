#include "main.h"

/**
 * *_strpbrk- searches a string for any of a set of bytes.
 * @s: Pointer to the string to be examined.
 * @accept: Pointer to accepted characters of substring.
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char first;

	first = strpbrk(s, accept);
	return (first);
}
