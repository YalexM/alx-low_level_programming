#include <stdio.h>

/**
 * main - prins alpha in lawer and uppercase.
 * Return: Always 0 (Success)
 */

int main(void)
{
char l;
	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (l = 'A'; l <= 'Z'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
