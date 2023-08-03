#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:pointer to string of 1 and 0
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0, i;

	if (b == NULL)
		return (0);


	while (b[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		char c = b[i];

		if (c != '0' && c != '1')
		{
			return (0);
		}
		result = (result << 1) | (c - '0');
	}

	return (result);
}
