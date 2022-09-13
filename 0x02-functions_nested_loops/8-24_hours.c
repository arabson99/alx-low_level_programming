$include "main.h"
/**
 * jack bauer - function that prints every minute of the day of jack bauer, starti
 * n from 00:00 tp 23:59, min loop counts mins, while hour loop counts hours
 * and resets mins
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_reminder;
	int minutes_reminder;

	while (hours <= 23)
	{
		mins_reminder = minutes % 10;
		hours_reminder = hours % 10;
		_putchar(hours / 10 + '0');
		_putchar(hours_reminder + '0');
			_putchar(':');
		_putchar(minutes / 10 + '0');
		_putchar(mins_reminder + '0');
		minutes++;
		_putchar('\n');
	}
	hours++;
	minutes = 0;
}
