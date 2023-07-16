#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints different result when the program is re-compile
 * @void: Has no argument
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of n is ");
	n = n % 10 + 0;

	if (n > 5)
	{
		printf("and is greater than 5\n");
	}
	else
		if (n == 0)
		{
			printf("and is 0\n");
		}
		else
			if (n < 6 && n != 0)
			{
				printf("and is less than 6 and not 0\n");
			}

	return (0);
}
