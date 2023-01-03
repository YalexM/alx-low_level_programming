#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a squere.
 * @a: pointer of array.
 * @size: size of array.
 */

void print_diagsums(int *a, int size)
{
int i, sumdiagonla1, sumdiagonal2;
	for (i = 0; i < size; i++)
	{
		sumdiagonla1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sumdiagonal2 += a[i];
		a -= size;
	}
	print("%d, %d\n", sumdiagonla1, sumdiagonal2);
}
