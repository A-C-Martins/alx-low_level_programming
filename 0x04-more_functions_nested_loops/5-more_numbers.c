#include <stdio.h>
#include "main.h"

/**
 * more_numbers - peints 10 timws 0 to 14
 */

void more_numbers(void)
{
	int i, j;

	while (j <= 9)
	{
		while (i <= 14)
		{
			if (i > j)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
		j++;
		i = 0;
	}
}
