#include "main.h"

/**
 * _strstr- function that locates a substring.
 * @haystack: The string to search in .
 * @needle: The string to search for
 * Return: a pointer to the begnning of the located substring
 * or NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	char substring;

	substring = strstr(haystack, needle);
	return (substring);
}
