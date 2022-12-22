include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates tow string but add inputed number of byets.
 * @src: string to be completed at of dest .
 * @dest: string that will be appended upon.
 * @n: the bumber of byets from src to be appended to dest.
 * Return: A pointer to resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
	dest_len++;
for (index = 0; src[index]; &&index < n; index++)
	dest[dest_len++] = src[index];
return (dest);
}
