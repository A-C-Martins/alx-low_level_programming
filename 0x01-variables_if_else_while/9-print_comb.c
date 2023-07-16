#include <stdio.h>
#include <stdlib.h>

/**
 * main - main body
 *
 * Return: 0 success
 */

int main(void)
{
	int alpha = 10;
	int i = 0;

	while (i < alpha)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
