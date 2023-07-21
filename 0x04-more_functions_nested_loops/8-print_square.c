#include <stdio.h>
#include "main.h"
/**
 * print_square - prints # square of a given number
 */
void print_square(int size)
{
	int wth, hth;

	for (hth = 0; hth < size; hth++)
	{
		for (wth = 0; wth < size; wth++)
		{
			_putchar('#');
			if (size == 0 || size < 0)
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
