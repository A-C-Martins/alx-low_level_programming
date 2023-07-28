#include <stdio.h>

/**
 * reverse_array - reversed the inputed string
 * @a: Number to be reversed
 * @n: counter
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; n > i; i--)
	{
		printf("%d", a[i]);
	}
}
