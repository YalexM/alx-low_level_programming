#include <stdio.h>

/**
 * main - prins alpha in lawer case.
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
char l;
for (l = 'a'; l <= 'z'; l++)
	{
	if (l != 'e' && l != 'q')
		putchar(l);
	}
	putchar('\n');
	return (0);
}
