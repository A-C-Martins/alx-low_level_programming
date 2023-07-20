#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of multiples of 5 and 3
 *
 * Return: 0 success
 */

int main(void)
{
	int digit, sum = 0;

	for (digit = 0; digit < 1024; digit++)
	{
		if ((digit % 3) == 0 || (digit % 5) == 0)
			sum += digit;
	}

	printf("%d\n", sum);

	return (0);
}
