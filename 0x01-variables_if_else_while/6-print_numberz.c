#include <stdio.h>
/**
 * main - prints a digit
 *
 * Return: 0 success
 */
int main(void)
{
	int digit = 10;
	int i = 0;

	while (i < digit)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	return (0);
}
