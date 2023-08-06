#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks is their is an upper case letter and
 * return 1
 * @c: the check one
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
