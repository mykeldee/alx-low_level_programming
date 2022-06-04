#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	char alphA[26] = "ABDCEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 26)
	{
		putchar(alpha[i]);
		i++;
	}
	i = 0;
	while (i < 26)
	{
		putchar(alphA[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
