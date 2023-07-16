#include <stdio.h>
#include <string.h>

/**
 * main - Writes digit
 *
 * Return: 0 success
 */

int main(void)
{
	int digit = 10;

	int i = 0;

	while (i < digit)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);
}
