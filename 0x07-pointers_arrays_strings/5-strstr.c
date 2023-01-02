#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: the string to be searched.
 * @needle: searched in haystack.
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
char *a, *b;
	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;
	while (*haystack != '\0' && *b != '\0' && *haystack == *b)
	{
		haystack++;
		b++;
	}
	if (*b == '\0')
		return (a);
	haystack = a + 1;
	}
	return (0);
}
