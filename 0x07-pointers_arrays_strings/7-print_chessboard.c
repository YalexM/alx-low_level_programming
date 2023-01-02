#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard.
 * @a: the  chessboard to be printed.
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
int c, b;
	for (c = 0; c <= 7; c++)
	{
	for (b = 0; b <= 7; b++)
	{
		_putchar(a[c][b]);
	}
	_putchar(10);
	}
}

