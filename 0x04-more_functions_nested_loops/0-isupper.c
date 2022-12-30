#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character
 * Return: 1 an uppercase character, otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
