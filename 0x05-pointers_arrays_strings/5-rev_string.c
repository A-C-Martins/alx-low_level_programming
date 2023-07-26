#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: declaration of *s and paramters for the function
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, rv;
	char character;

	for (i = '\0'; s[i] != 0; i++)
	{
	}
	rv = 0;
	for (i = i - 1; rv < i; rv++)
	{
		character = s[i];
		s[i] = s[rv];
		s[rv] = character;
		i--;
	}
}
