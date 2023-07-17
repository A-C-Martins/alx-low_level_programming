#include <stdio.h>

/**
 * main -main body
 *
 * Return: 0 success
 */
int main(void)
{
	int alpha = 9;
	int digit;
	int i, a;

	for (i = 0; i <= alpha; i++)
	{
		digit = i;
		/**
		 * =================================================
		 * printf(" min is %d\t", min);
		 * printf("digi %d\n", digit);
		 * ==============================================
		 * this program prints list of numbers, extracting
		 * only those numbers that do not
		 * occure twise
		 * =================================================
		 */
		for (a = digit + 1; a <= 9; a++)
		{
			putchar(digit + '0');
			putchar(a + '0');
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
