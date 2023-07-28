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
	}
	/*putchar('\n');*/
	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}
		/* code */
	}
	printf("\n");
}
