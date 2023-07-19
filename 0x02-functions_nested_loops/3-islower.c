#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Takes in an alphabet, check if it is a lower
 *	or upper case
 *	returns 1 if it is a lower case
 *	returns 0 if it is an upper case
 *
 * @c: returns 0 or 1
 *
 * Return: 0 success
 */

int _islower(int c)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (c > 64 && c < 91)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
