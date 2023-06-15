#include <unistd.h>
/**
 * main - write line to error output
 * Return: 1 no idea why
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof(and that piece of art is useful\" - Dora Korpar, 2015-10-19\n) - 1);
	return (1);
}
