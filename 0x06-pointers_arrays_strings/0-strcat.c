#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strcat - concatinates two string
 * @dest: first string
 * @src: string to be appended
 *
 * Return: the appended string
 */
char *_strcat(char *dest, char *src)
{
	size_t len1 = _strlen(dest);
	size_t len2 = _strlen(src);

	char *_appended = (char *)malloc((len1 + len2 + 1) sizeof(char));
	if (_appended == NULL)
	{
		printf("memory allocation failed");
		return (NULL);
	}
	size_t i, j;

	for (i = 0; i < len1; i++)
	{
		_appended[i] = dest[i];
	}
	for (j = 0; j < len2; j++)
	{
		_appended[len1 + 1] = src[j];
	}
	_appeded[len1 + len2] = '\0';

	return (_appended);
}
