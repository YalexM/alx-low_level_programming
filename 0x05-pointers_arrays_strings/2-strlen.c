#include "main.h"
#include <stdio.h>

/**
 *_strlen - function that returns the length of string.
 * @s: this is the string of input
 * Return: length of the sting.
 */

int _strlen(char *s)
{
int len;
for (len = 0; s[len] != '\0'; len++)
{
len + = 1;
}
return (len);
}
