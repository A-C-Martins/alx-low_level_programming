#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - displays the last digit
 * in a givin number
 *
 * @number: number to work on
 *
 * Return: digit
 */

int print_last_digit(int number)
{
	int digit;

	digit = number % 10;

	return (digit);
}
