#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: string
 * @src: string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
