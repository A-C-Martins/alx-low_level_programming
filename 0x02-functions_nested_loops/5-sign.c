#include <stdio.h>
#include "main.h"

/**
 * print_sign - Takes in an numbet, check if it is 0
 *	to write 0
 *	writes + if it is greater than 0
 *	writes - if it is less than 0
 *
 * @n: returns 1, 0 or -1
 *
 * Return: 0 success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
}
