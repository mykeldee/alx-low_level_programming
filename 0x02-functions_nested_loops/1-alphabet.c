#include "main.h"

/**
 * main - Prints alphabets in lowercase
 *
 * Return: Always 0 (success)
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
	return;
}
