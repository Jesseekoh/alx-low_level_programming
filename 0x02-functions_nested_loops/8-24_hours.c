#include "main.h"

/**
  * jack_bauer - prints the minutes of the day for 00:00 to 23:59
  * Return: void
  */

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; i < 24; i++)
	{
		for (min = 0; min < 60; min++)
		{
			if (hr < 10)
				_putchar('0');
			_putchar(hr);
			_putchar(':');
			if (min < 10)
				_putchar('0');
			_putchar(min);
			_putchar('\n');
		}
	}
}
