#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
	for (n = 0; n <= 10; n++)
	{
		putchar(n);
		if (n < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
