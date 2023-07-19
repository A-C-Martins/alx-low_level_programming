#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isalpha - Takes in an alphabet, check if it is a lower
 *	or upper case
 *	returns 1 if it is a lower case and upper case
 *	returns 0 if it is not
 *
 * @c: returns 0 or 1
 *
 * Return: 0 success
 */

int _isalpha(int c)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if ((c > 64 && c < 91) || (c > 96 && c < 123))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
