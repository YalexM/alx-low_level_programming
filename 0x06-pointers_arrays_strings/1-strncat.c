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
int index;
int dest_len;
index = 0;
dest_len = 0;
while (dest[index] != '\0')
{
	index++;
}
while (dest_len < n && src[dest_len] != '\0')
{
	dest[dest_len++] = src[index];
index++;
dest_len++;
}
dest[index] = '\0';
return (dest);
}
