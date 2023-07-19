#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	int size = 98;

	for (n = 0; n <= size; n++)
	{
		_putchar(n + '0');
		if (n > size)
		{
			for (n = 98; n >= size; n--)
			{
				putchar(n + '0');
			}
		}
