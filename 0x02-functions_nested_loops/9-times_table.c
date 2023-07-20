#include <stdio.h>
#include "main.h"

/**
 * times_table - print the 9 times table, froom 0
 */

void times_table(void)
{
	int number;
	int multipliar;
	int result;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multipliar = 1; multipliar <= 9; multipliar++)
		{
			_putchar(44);
			_putchar(32);

			result = number * multipliar;

			if (result <= 9)
			{
				_putchar(32);
			}
			else
			{
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
