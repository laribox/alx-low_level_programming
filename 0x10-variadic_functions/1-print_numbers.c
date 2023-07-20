#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers in viriadic
 * @separator: string to seperate the numbers
 * @n: Size of args
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);

}
