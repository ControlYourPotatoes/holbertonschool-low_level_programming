#include "main.h"
#include <ctype.h>

/**
* jack_bauer - 24 hour clock
*
* Return: Full countdown of the countdown
*/

void jack_bauer(void)
{
	int hours = 0, minutes = 0;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hours / 10) + 0);
			_putchar((hours % 10) + 0);
			_putchar(';');
			_putchar((minutes / 10) + 0);
			_putchar((minutes % 10) + 0);
		}
	}
}
