#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * swap_int - swaps the value of two opposite number
 * @a: first number
 * @b: second number
 *
 * Author - AC Martins:
*/
void swap_int(int *a, int *b)
{
	int tmpt;

	tmpt = *a;
	*a = *b;
	*b = tmpt;
}
