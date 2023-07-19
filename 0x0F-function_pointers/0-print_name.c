#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 * @name: the name
 * @f: function that print the name
 *
 * Rteurn: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
