#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard.
 * @a: the  chessboard to be printed.
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
int b, i;
	for (b = 0; b < 8; b++)
	{
	for (i = 0; i < 8; i++)
	{
	}
	_putchar(a[b][i]);
	_putchar("\n");
	}
}
