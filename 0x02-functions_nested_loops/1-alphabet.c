#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints lower case alphabets
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
