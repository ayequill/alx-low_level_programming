#include "main.h"

/**
 * _isalpha - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is either lowercase or uppercase else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
