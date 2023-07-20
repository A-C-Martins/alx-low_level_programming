#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints n times table from 0
 *
 * @n: counter
 */

void print_times_table(int n)
{
	int number, multipliar, result;

	if (n >= 0 && n <= 15)
	{
		for (number = 0; number <= n; number++)
		{
			_putchar('0');

			for (multipliar = 1; multipliar <= n; multipliar++)
			{
				_putchar(',');
				_putchar(' ');

				result = number * multipliar;

				if (result <= 99)
					_putchar(' ');
				if (result <= 9)
					_putchar(' ');

				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10)) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
