#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - reverses a string
 * @s: To be revers
 *
 * Author - AC Martins
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
