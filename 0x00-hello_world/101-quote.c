#include <unistd.h>
/**
 * main - write line to error output
 * Return: 1 no idea why
*/
int main(void)
{
	char message[] =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);
	return (1);
}
