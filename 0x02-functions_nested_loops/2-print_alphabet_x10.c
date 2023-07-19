#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints a to z in multiples of 10
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
	}

}
