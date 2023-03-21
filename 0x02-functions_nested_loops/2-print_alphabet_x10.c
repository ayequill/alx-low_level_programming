#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
int count = 0;
	char letter;
for (int i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
}
}
