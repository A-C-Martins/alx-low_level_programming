#include <stdio.h>
#include <stdlib.h>

/**
 * main - program execution start up
 *
 * @arcount: The argumment index number
 * @argv: Argument vector 
 *
 * Return: 0 successful
 */

int main(int arcount, char *argv[])
{
	while (arcount--)
	{

		printf("%s\n", argv[arcount]);
	}

	return (0);
}
