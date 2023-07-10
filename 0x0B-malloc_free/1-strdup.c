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
	int i;

	dup = malloc(sizeof(str) + 1);
	if (dup == NULL || str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	return (dup);
}
