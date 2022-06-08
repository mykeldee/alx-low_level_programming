#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: Void (Returns nothing)
 */
void jack_bauer(void)
{
	int a, b, c, d;

	a = 48;
	while (a < 51)
	{
		b = 48;
		while (b < 52)
		{
			c = 48;
			while (c < 54)
			{
				d = 48;
				while (d < 58)
				{
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
