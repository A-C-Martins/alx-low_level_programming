#include <stdio.h>

/**
 * main - main body
 *
 * Return: 0 success
 */

int main(void)
{
	int a = 10;
	char b = 'a';
	int i = 0;

	while (i < a)
	{
		putchar(i + '0');
		i++;
	}
	while (b < 'g')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
