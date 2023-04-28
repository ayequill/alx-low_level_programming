#include <stdio.h>

/*
* The __attribute__ ((constructor)) attribute tells
* the compiler to execute the function automatically
* before the main function.
*/
void print_before_main(void) __attribute__ ((constructor));

/**
 * print_before_main - prints a string before main function is executed
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
