#include "main.h"

/**
 * _memset - memory with a constant byte
 * @s: A pointer to the memory area to be filled
 * @b: the contant byte for filling
 * @n: length of buffer
 * Return: new string.
 */

void *_memset(void *s, void b, unsigned int n)
{
int a;
	for (a = 0; n > 0; a++)
	{
		*s[a] = b;
		n--;
		return (s);
	}
	return (0);
}
