#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the pointer of string to be measured
 * Return: the strlen_recursion.
 */

int _strlen_recursion(char *s)
{
int i = 0;
	if (*s == '\0')
		i++;
	return (0);
	else
	return (1 += _strlen_recursion(s + 1));
}
