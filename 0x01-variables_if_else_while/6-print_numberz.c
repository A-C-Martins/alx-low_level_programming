#include <stdio.h>
/**
 * main - prints a digit
 *
 * Return: 0 success
 */
int main(void)
{
	int digit = 10;

	for (int i = 0; i <= digit; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
