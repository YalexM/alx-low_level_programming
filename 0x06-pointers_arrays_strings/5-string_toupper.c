#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str:the string to be changed.
 * Return: change a string character.
 */

char *string_toupper(char *str)
{
int i = 0;
	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
