#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to be searched.
 * @accept: the prefix to be measured.
 *
 * Return: new string.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, a;
	for (a = 0; *(s + j); a++)
	{
	for (i = 0; *(accept + i); i++)
	{
	if (*(s + a) == *(accept + i))
		break;
	}
	if (*(accept + i) == '\0')
		break;
	}
	return (a);
}
