#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints all number except 2 and 4
 */

void print_most_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		if (digit != 2 && digit != 4)
		{
			_putchar(digit + '0');
		}
	}
	_putchar('\n');
}
