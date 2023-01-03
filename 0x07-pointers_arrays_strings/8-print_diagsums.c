#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a squere.
 * @a: pointer of array.
 * @size: size of array.
 */

void print_diagsums(int *a, int size)
{
int i, size1, sum1 = 0, sum2 = 0;
size1 = ( size * size) -1;
for (i = 0; i <= size; i = i + (size + 1))
{
		sum1 = sum1 + a[i];
	}
	for (i = 0; i < size; i++)
	{
		sumdiagonal2 += a[i];
		a -= size;
	}
	print("%d, %d\n", sumdiagonla1, sumdiagonal2);
}
