#include <stdio.h>

/**
 * reverse_array - reversed the inputed string
 * @a: Number to be reversed
 * @n: counter
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
		/* code */
	}
	putchar('\n');
	while (a[i] >= 0)
	{
		printf("%d, ", a[i]);
		i--;
		/* code */
	}
}
