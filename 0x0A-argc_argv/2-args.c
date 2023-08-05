#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_argv - Outputs argument taked in
 * @len: lenn counter
 * @vect: Agument vector
 *
 * Return: void value
 */
void print_argv(int len, char **vect)
{
	int i;

	for (i = 0; i < len; i++)
	{
		printf("%s\n", vect[i]);
	}
}

/**
 * main - Program start up
 * @arcount: argument count
 * @argv: argument vector
 *
 * Return: 0 success
 */
int main(int arcount, char *argv[])
{
	print_argv(arcount, argv);

	return (0);
}
