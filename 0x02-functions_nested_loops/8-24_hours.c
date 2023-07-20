#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print the time of the dat
 */

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}
