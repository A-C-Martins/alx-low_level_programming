#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copys the value of  a string
 * @dest: Array i
 * @src: Array 2
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[j] = src[i];
	}

	dest[j] = '\0';
	return (dest);
}
