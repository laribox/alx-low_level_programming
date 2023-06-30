#include "main.h"

/**
 * _strncat- function that concatenates two strings at n.
 * @dest: string
 * @src: string
 * @n: index to concate
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
