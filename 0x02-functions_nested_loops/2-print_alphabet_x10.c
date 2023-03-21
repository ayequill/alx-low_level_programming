#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char letter;
for (int i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
}
}
