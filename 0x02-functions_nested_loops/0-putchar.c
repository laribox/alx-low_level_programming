#include <main.h>
#include <unistd.h>

/**
 * main - print _putchar
 * Return: 0
 */
int main(void)
{
	char message[] = "_putchar\n";

	write(1, message, strlen(message));
	return (0);
}
