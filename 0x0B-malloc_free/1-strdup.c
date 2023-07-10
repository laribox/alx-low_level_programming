#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy
 * of the string given as a parameter.
 * @str:
 *
 * Return: Nothing
 */

char *_strdup(char *str)
{
	char *dup;

	dup = malloc(sizeof(char) * (int)strlen(str));
	if (dup == NULL || str == NULL)
		return (NULL);

	dup = str;

	return (dup);
}
