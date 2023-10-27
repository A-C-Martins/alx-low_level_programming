#include "main.h"

/**
 * binary_to_uint - converts numbers into an unsigned int
 * @b: chararcter string
 * Return: converted decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int all, pw;
	int size;

	if (b == NULL)
	{
		return (0);
	}
	for (size = 0; b[size]; size++)
	{
		if (b[size] != '0' && b[size] != '1')
		{
			return (0);
		}
	}

	for (pw = 1, all = 0, size--; size >= 0; size--, pw *= 2)
	{
		if (b[size] == '1')
		{
			all +=  pw;
		}
	}

	return (all);
}
