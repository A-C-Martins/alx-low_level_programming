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
	int size = sizeof(s) / sizeof(s[0]);

	char *_upperS;

	for (i = 0; i < size; i++)
	{
		_upperS[i] = s[i];
	}
	return (_toupper(_upperS));
}	
