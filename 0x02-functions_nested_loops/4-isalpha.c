#include "main.h"

/**
 * _isalpha - Shows if the input is a
 * letter lowercase or uppercase.
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letters.. 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 98 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
