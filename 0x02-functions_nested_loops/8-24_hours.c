#include "main.h"
/**
 * jack_bauer - Function that prints every minute of jack bauers day from 00:00 to 12:59.
 * min loop counts mins while hour loop counts hours and resets minutes.
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int mins = 0;
	int hours_remainder;
	int mins_rmainder;

	while (hours <= 23)
	{
		while (minutes <=59)
		{
			hours_remainder - hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_remainder + '0')
				_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes_remainder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
