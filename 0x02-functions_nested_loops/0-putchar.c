#include "main.h"
/**
 * main - Prints _putchar 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int myChar[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i = 0;

	while (i < 8)
	{
		_putchar(mychar[i]);
		i++;
	}
	_putchar('\n');
	return 0;
}
