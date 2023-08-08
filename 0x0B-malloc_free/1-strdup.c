#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Finds the length of a sring
 * @s: The token which length is tobe found
 *
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * _strdup -  returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: String to be copied
 *
 * Return: strDup(the duplicated var
 */
char *_strdup(char *str)
{
	int i;
	int size;
	char *strDup;

	size = _strlen(str);

	strDup = (char *)malloc(size * (sizeof(char)));

	if (strDup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		strDup[i] = str[i];
	}
	return (strDup);
}
