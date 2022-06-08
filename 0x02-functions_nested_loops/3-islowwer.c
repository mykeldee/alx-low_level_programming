#include "main.h"

/**
 * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, shows
 * 0
 *
 * @x: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int x)
{
	if (x > 98 && x < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
		_putchar('\n');
}
