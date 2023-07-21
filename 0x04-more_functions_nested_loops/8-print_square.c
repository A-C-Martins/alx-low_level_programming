#include <stdio.h>
#include "main.h"
/**
 * print_square - prints # square of a given number
 */
void print_square(int size)
{
	int wth, hth;

	if (size > 0)
	{
		for (hth = 0; hth < size; hth++)
		{
			
			for (wth = 0; wth < size; wth++)
			{
				_putchar('#');
			}
			
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
