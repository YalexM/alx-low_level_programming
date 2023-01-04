#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the pointer of string to be measured
 * Return: _strlen_recursion.
 */

int _strlen_recursion(char *s)
{
int i = 0;
	if (*s)
	{
		i++;
	i += _strlen_recursion(s + 1);
	}
}
