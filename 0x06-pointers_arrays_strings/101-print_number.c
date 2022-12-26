#include "main.h"

/**
 * print_numbe - Function that prints an integer.
 * @n: the integer to be printed.
 *
 */

void print_number(int n)
{
unsigned int num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		Print_number(num / 10);
	_putchar((num % 10) + '0');
}
