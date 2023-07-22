#include <stdio.h>
#include "main.h"

/**
 * print_number - returns a giving number
 * @n: input output
*/
void print_number(int n)
{
	/* checks if number is negative if it is*/

	if (n < 0)
	{
		/* prints '-' */
		_putchar('-')

		/* changes the value to absolute value */
		n = -n;
	}
	/* checks if n is greater or equal to 10 */

	if (n / 10)
	{
		/* function call it self to make sure the digit are printed correctly*/

		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
