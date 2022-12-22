#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: The array of integer to be reversed.
 * @n: The number of element
 */

void reverse_array(int *a, int n)
{
int tmp, i;
	for (i = n - 1; i > n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
}
