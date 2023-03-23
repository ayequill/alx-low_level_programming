#include "main.h"

/**
* _isupper - returns 1 if isUpperCase else returns 0
*@c: the char being checked
*Return: 1 if is upper else 0
*
*/


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
