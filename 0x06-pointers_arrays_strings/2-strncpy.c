#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: string
 * @src: string
 * @n: index to concate
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
