#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - function that prints before the main
 * function is executed
 * Description: a constructor function that will be
 * automatically executed before the main function
 * when the program starts.
 * function is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
