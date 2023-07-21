#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times 1 to 14
 */

void more_numbers(void)
{

	int a = 0;
	int b = 0;

	while (b <= 9)
	{
		while (a <= 14)
		{
			if (a > 9)
				putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			a++;

		}
	putchar('\n');
	b++;
	a = 0;
	}
}

int main(void)
{
	more_numbers();
	return (0);
}
