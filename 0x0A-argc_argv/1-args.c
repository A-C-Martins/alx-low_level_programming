#include <stdio.h>

/**
 * main - program start up
 * @arcount: - Argument count
 * @argv: Agument vector
 *
 * Return: 0 success
 */

int main(int arcount, char *argv[])
{
	int i;

	for (i = 0; i < arcount; i++)
	{
		printf("%d\n", i);
		
		(void)argv;
	}

	return (0);
}
