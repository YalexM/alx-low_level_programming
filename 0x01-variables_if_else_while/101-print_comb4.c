#include <stdio.h>

/**
 * main - prints combinations of three digits.
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;
int b;
int c;
	for (a = 48; a < 58; a++)
	{
	for (b = 48; b < 58; b++)
	{
	if (b > a)
	{
	for (c = 48; c < 58; c++)
	{
	if (c > b)
	{
		putchar(a);
		putchar(b);
		putchar(c);
	if (a == 55 && b == 56 && c == 57)
	{
		break;
	}
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

