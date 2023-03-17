#include <stdio.h>

/**
* main - prints the alphabets in lowercase & uppercase
* Return: 0
*
*/

int main(void)
{
	char x;
	char y;
	char z;

	x = 'a';
	y = '\n';
	z = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (z <= 'Z')
	{
		putchar(z);
		z++;
	}
	putchar(y);
	return (0);
}
