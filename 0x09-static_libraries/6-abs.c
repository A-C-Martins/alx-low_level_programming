#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _abs - prints the absolut number of an input
 *
 * @j: get the abs of a number
 *
 * Return: num
 */
int _abs(int j)
{
	if (j < 0)
	{
		return (-j);
	}
	else
	{
		return (j);
	}
}
