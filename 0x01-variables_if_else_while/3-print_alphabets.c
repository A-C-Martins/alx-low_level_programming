#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints upper and lower case latter
 *
 * Return: 0 success
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}
