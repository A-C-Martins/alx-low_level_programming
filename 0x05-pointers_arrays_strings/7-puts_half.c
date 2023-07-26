#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: declaration of n and paramters for the function
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, a;
	char l;

	for (i = 0; str[i] != 0; i++)
	{
	}
	if (i % 2 == 0)
	{

		for ((a = i / 2); str[a] != 0; a++)
		{
			l = str[a];
			_putchar(l);
		}
	}
	else
	{
		for ((a = (i - 1) / 2); str[a] != 0; a++)
		{
			l = str[a];
			_putchar(l);
		}
	}
	_putchar('\n');
}
