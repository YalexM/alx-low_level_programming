#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of string.
 * @str: The string to capitalized.
 * Return: The capitalize string returns.
 */

char *cap_string(char *str)
{
	int i = 0;
while (str[i])
{
while (!(str[i]  >= 'a' && str[i] <= 'z'))
	i++;
if (str[i - i] == " " ||
		str[i - i] == '\t' ||
		str[i - i] == '\n' ||
		str[i - i] == ',' ||
		str[i - i] == ';' ||
		str[i - i] == '.' ||
		str[i - i] == '!' ||
		str[i - i] == '?' ||
		str[i - i] == '"' ||
		str[i - i] == '(' ||
		str[i - i] == ')' ||
		str[i - i] == '{' ||
		str[i - i] == '}')
	str[i] -= 32;
i++;
}
return (str);
}
