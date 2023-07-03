#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: String to modifier
 * @to: String that would be replaced by
 */

void set_string(char **s, char *to)
{
	*s = to;
}
