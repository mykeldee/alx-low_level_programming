#include <stdio.h>
/**
 * main - Entry Poing
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int x;
	int y;
	int z;
	int param1;
	int param2;

	x = 48;
	while (x < 58)
	{
		y = 48;
		while (y < 58)
		{
			z =48;
			while (z < 58)
			{
				i = 48;
				while (i < 58)
				{
					param1 = (x * 10) + y;
					param2 = (z * 10) + i;
					if (param1 < param2)
					{
						putchar(x);
						putchar(y);
						putchar(' ');
						putchar(z);
						putchar(i);
						if (x == 57 && y == 56 && z == 57 && i == 57)
							break;
						putchar(',');
						putchar(' ');
					}
					i++;
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
