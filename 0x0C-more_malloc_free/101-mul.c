#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * throw_error - prints an error massage and exit 98
*/
void throw_error()
{
	printf("Error\n");
	exit(98);
}

/**
 * _isdigit - Checks for a digit and return 1
 * @c: checked input
 *
 * Return: 1 success and 0 failure
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


int main(int argc, char **argv)
{
	int i, k, j, *result, digit0, digit1, buf, x = 0, len;
	char *num1, *num2;

	num1 = argv[1];
	num2 = argv[2];

	if (argc != 3 || !_isdigit(*num1) || !_isdigit(*num2))
	{
		throw_error();
	}

	i = _strlen(num1);
	j = _strlen(num2);
	len = i + j + 1;

	result = malloc((j + i + 1) * sizeof(int));
	if (result == NULL)
	{
		return (1);
	}
	for (k = 0; k <= i + j; k++)
		result[k] = 0;

	for (i = i - 1; i >= 0; i--)
	{
		digit0 = num1[i] - '0';
		buf = 0;
		for (j = _strlen(num2) - 1; j >= 0; j--)
		{
			digit1 = num2[j] - '0';
			buf += result[i + j + 1] + (digit0 * digit1);
			result[i + j + 1] = buf % 10;
			buf /= 10;
		}
		if (buf > 0)
			result[i + j + 1] += buf;
	}
	for (k = 0; k < len - 1; k++)
	{
		if (result[k])
			x = 1;
		if (x)
			putchar(result[k] + '0');
	}
	if (!x)
		putchar('0');
	putchar('\n');
	free(result);
	return (0);


}
