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
		while (n > size)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < size)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
