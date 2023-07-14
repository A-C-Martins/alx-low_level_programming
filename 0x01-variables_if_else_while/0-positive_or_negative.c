#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - The main fuction
 * @void: thenull arumrn
 *
 * Return: Always 0 (suc
 * cessu)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n <= 0)
	{
		printf("%d\tis negative\n", n);
	}
	else
		if (n >= 0)
		{
			printf("%d\tis positive\n", n);
		}
		else
		{
			printf("%d\tis zero\n", n);
		}
	return (0);
}
