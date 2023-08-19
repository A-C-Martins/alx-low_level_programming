#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting values of the argument sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int value = 0;
	va_list container;

	va_start(container, n);

	for (i = 0; i < n; i++)
		value += va_arg(container, int);

	va_end(container);

	return (value);
}
