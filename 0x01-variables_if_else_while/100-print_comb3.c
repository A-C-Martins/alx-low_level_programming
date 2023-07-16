#include <stdio.h>
/**
 * main - main body
 *
 * Return: 0 success
 */
int main(void)
{
	int alpha = 10;
	int digit;
	int i, a, k, min;
	
	for (k = 10; k > 1; k--)
	{
		min = k;
		
		for (i = 0; i < alpha; i++)
		{
			digit = alpha - min;
		}

		/**
		 * ===============================================================================
		 * ===============================================================================
		 */
		for (a = 0; a < 10; a++)
		{
			if (digit != a )
			{
				putchar(digit + '0');
				putchar(a + '0');
			}

			if (a != digit)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	
	return (0);
}
