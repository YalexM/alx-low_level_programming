#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
	for (n = 38; n <= 48; n++)
	{
		putchar(n);
		if (n != 47)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
