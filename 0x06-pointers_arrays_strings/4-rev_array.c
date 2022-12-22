#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: The array of integer to be reversed.
 * @n: The number of element in the array.
 */

void reverse_array(int *a, int n)
{
int i = 0, tmp;
	for (tmp = n / 2; tmp > 0; tmp--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - i] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
		a[i] = tmp;
	}
}
