#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard.
 * @a: the  chessboard to be printed.
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
int tmp, index;
	for (tmp = 0; a[tmp][7]; tmp++)
	{
	for (index = 0; index < 8; index++)
	{
		_putchar(a[tmp][index]);
	}
	_putchar('\n');
	}
}

