#include <stdio.h>

// The function you want to execute before main
void my_function(void) __attribute__((constructor));

void my_function(void) {
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
