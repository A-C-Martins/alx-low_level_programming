#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
 * str_concat - concatenats two string
 * @s1: first string
 * @s2: String to be merged
 *
 * Return: newly allocated pointer to array
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1, len2, i = 0, j = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	str = malloc(len1 + len2 + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; (s1[i] + s2[j]) != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';

	return (str);
}
