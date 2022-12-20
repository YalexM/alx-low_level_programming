#include "main.h"

/**
 * _puts - this is the function that puts
 * @str: this is input of string
 *
 */

void _puts(char *str)
{
int n;
for (n = 0; str[n] != '\0'; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
