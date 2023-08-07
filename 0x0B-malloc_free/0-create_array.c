#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of type
 * @c: char to be copied
 *
 * Return: buffer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	char *buffer;
	
	buffer = (char *)malloc(size * (sizeof(unsigned int) + 1));

	if (buffer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
