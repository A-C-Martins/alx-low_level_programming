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
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			/*_putchar(44);*/
			/*_putchar(32);*/
			printf(", %d", a[i]);
		}
	}
	_putchar('\n');
}
