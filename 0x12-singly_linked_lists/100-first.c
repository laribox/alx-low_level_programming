#include <stdio.h>

void my_function(void) __attribute__((constructor));


/**
 * my_function - function run before main
 */
void my_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
