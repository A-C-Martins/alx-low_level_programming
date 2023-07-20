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
	if (c > 96 && c < 123)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
