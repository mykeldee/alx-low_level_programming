#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: void (Returns nothing)
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 97; y < 123; y++)
		{
			_putchar(y);
		}
	_putchar('\n');
	}
}
