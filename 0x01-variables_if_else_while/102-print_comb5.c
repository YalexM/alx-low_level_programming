#include <stdio.h>

/**
 * main - prints combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;
int b;
for (a = 0; a <= 99; a++)
	{
	for (b = a + 1; b <= 100; b++)
	{
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
		putchar(' ');
		putchar((b / 10) + '0');
		putchar((b % 1)0 + '0');
		if (a == 99 && b == 100)
			continue;
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
