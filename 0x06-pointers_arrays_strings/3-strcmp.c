#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s2: paramater for string 2
 * @s1: paramater for string 1
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] > s2[j])
			{
				return (s1[i] - s2[j]);
			}
			else
				if (s2[j] > s1[i])
				{
					return (s1[i] - s2[j]);
				}
				else
				{
					return (0);
				}
		}
	}
	return (0);
}
