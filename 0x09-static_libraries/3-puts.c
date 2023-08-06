#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts - Outputs a sring and a new line
 * @str: intake string
 *
 * Author - AC Martins
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
