#include "main.h"

/**
 * print_rev - this function is a reverse string.
 * @s: this is the input string in rev.
 */

void print_rev(char *s)
{
int n;
for (n = 0; *s != '\0'; n++)
	for (n = n - 1; *s != '\0'; n--)
	{
		_putchar(s[n]);
	}
_putchar('\n');
}
