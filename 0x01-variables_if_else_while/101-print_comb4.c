#include <stdio.h>
/**
 * main - main body
 *
 * Return: 0 success
 */

int main(void)
{
	int i, j, x;

	for (x = 0; x <= 9; x++)
	{
		for (i = x + 1; i <= 9; i++)
		{
			for (j = i + 1; j <= 9; j++)
			{
				putchar(x + '0');
				putchar(i + '0');
				putchar(j + '0');

				if (x != 7 || i != 8 || j != 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
