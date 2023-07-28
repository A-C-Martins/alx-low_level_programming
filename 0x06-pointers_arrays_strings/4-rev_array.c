#include <stdio.h>

/**
 * reverse_array - reversed the inputed string
 * @a: Number to be reversed
 * @n: counter
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmpt;

	j = n - 1;

	for (i = 0; n > i; i++)
	{
		tmpt = arr[i];
		a[i] = a[j];
		a[j--] = tmpt;
	}
}
