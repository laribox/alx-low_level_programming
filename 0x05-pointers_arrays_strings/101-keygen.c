#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Gnerates a random password
 *
 * Return: the generated password
 */
int main(void)
{
char ran;
int y;

srand(time(0));
while (y <= 2645)
{
ran = rand() % 128;
y += ran;
putchar(ran);
}
putchar(2772 - y);
return (0);
}
