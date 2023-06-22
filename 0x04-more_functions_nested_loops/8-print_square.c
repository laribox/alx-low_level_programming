#include "main.h"
/**
 * print_square - print a square
 * @size: square size
 */
void print_square(int size)
{
	int i, j;
	if (size > 0)
	{
		for (i = 0; i < size ; i++)
		{
			for (j = 0; j < size ; j++)
			{

				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');

	}
}
