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
	unsigned int a = 0;
	for (; n > 0; a++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
