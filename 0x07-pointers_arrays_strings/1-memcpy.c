#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area.
 * @dest: source string.
 * @src: string for filling.
 * @n: the number of byte to copy from @src.
 * Return: A pointer to the distintation  buffer @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
a = 0;
	while (a < n)
	{
	*(dest + a) = *(src + a);
	a++;
	}
	return (dest);
}
