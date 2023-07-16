#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints an alphabet
 * Return:  0 success
 */

int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
