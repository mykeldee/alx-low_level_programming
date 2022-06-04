#include <stdio.h>
/**
 * main - Prints alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 122;
	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
