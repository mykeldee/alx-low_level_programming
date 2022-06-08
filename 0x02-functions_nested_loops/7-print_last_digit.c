#include "main.h"
/**
 * print_last_digit - prints the last
 * digit of a number
 *
 * @n: input number as integer
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (n < 0)
	{
		_putchar(-x + 48);
		return (-x);
	}
	else
	{
		_putchar(x + 48);
		return (x);
	}
}
