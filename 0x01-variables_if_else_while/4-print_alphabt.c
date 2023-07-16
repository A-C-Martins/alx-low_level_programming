#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet except q and e
 *
 * Return: 0 success
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}

	}

	putchar('\n');
	return (0);
}
