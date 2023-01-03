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
	for (tmp = 0; tmp <= 7; tmp++)
	{
	for (index = 0; index <= 7; index++)
	{
		_putchar(a[tmp][index]);
	}
	_putchar(10);
	}
	_putchar('\n')
}

