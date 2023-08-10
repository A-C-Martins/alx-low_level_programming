#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts - Outputs a sring and a new line
 * @s: intake string
 *
 * Author - AC Martins
*/
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
