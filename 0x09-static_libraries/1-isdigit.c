#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks for a digit and return 1
 * @c: checked input
 *
 * Return: 1 success and 0 failure
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
