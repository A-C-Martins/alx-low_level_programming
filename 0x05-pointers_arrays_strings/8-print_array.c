#include <stdio.h>
#include "main.h"
/**
 * print_array - prints all the elements of the arr
 * @a: the array
 * @n: Size of array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			_putchar(44);
			_putchar(32);
		}
	}
	_putchar('\n');
}
