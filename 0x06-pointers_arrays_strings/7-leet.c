#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337.
 * @str: The string to be encoded
 * Return: encoded string returns.
 */

char *leet(char *str)
{
int tmp = 0, len;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T',};
while (str[tmp])
{
for (len = 2; len <= 7; len++)
{
if (str[tmp] == leet[len] || str[tmp] - 32 == leet[len])
	str[tmp] == len + '0';
}
}
return (str);
}
