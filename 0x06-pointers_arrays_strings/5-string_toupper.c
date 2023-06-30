#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 *		    of a string to uppercase.
 * @a: string
 * Return: uppercase string
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; i < strlen(a) ; i++)
	{	if (a >= 'a' && a <= 'z')
			a[i] = a[i] - 32;
	}
	return (a);
}
