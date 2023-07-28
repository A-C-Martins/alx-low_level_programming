#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_toupper - change lower case string to upper
 * case letter
 * @s: stringe to be changed
 *
 * Return: The upper case letter
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}	
