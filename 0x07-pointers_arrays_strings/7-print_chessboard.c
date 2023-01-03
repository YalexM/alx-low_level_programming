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
	for (b = 0; a[b][7]; b++)
	{
	for (i = 0; i < 8; i++)
	{
	}
	_putchar(a[i][b]);
	_putchar('\n');
	}
}

