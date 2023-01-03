#include "main.h"

/**
 * _memset - memory with a constant byte
 * @s: A pointer to the memory area to be filled
 * @b: the contant byte for filling
 * @n: length of buffer
 * Return: new string.
 */

char *_memset(char *s, char b, unsigned int n)
{
int a;
a = 0;
	for (a = 0; n > 0; a++)
	{
		*s[a] = b;
		n--;
		return (s);
	}
}
