#include "main.h"
/**
 * print_alphabet - Prints alphabets in lowercase
 *
 * Return: void (returns nothing)
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
