#include <stdio.h>

/**
 * main - prints combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;
int b;
	for (a = 0; a < 100; a++)
	{
	for (b = 0; b < 100; b++)
	{
	if (a > b)

	{
		putchar(a / 10 + '0');
		putchar(a % 10 + '0');
		putchar(' ');
		putchar(b / 10 + '0');
		putchar(b % 10 + '0');
		for (a = 100 + b != 9899)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
