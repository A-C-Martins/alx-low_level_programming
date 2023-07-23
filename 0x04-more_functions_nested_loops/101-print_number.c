#include <stdio.h>
#include "main.h"

/**
 * print_number - returns a giving number
 * @n: input output
*/
void print_number(int n)
{
	unsigned int digit = n;
	/* checks if number is negative if it is*/

	if (n < 0)
	{
		/* prints '-' */
		_putchar('-');

		/* changes the value to absolute value */
		digit = -digit;
	}
	/* checks if digit is greater or equal to 10 */

	if ((digit / 10) > 0)
	{
		/* function call it self to make sure the digit are printed correctly*/

		print_number(digit / 10);
	}
	_putchar((digit % 10) + '0');
}
