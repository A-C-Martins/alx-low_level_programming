#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints from one to nine
 */

void print_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar(digit + '0');
	}
	_putchar('\n');
}
