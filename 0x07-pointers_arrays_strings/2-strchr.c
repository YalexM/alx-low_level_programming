#include <stdio.h>
/**
 * _strchr - locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 * Return: pointer to the first occurrance of the character c in the string s.
 */

char *_strchr(char *s, char c)
{
int i;
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
