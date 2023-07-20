#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints a natural number,
 * seperated by comma
 *
 * @n: number count
 */

void print_to_98(int n)
{
	int size = 98;

	if (n >= size)
	{
		for (n = 0; n > size; n--)
		{
			printf("%d, ", n - 1);
		}
		printf("%d\n", n);
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
