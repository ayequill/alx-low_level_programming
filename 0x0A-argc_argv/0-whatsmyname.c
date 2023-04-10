#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the name of the program.
* @argc: the number of times arguments are supplied when running the prohram.
* @argv: An array of pointers to the arguments.
* Return: Always 0
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
