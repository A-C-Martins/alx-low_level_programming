#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print the time of the dat
 */

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 24)
	{
		hour++;
		while (minute < 60)
		{
			minute++;

			printf("%02d:%02d\n", hour, minute);
		}
	}
}
