#include "main.h"
/**
 * times_table - this function prints the 9 times table, starting with 0
 * Return: Null, Void
 */
void times_table(void)
{
	int j, i, mul;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			mul = j * i;
			if (i == 0)
				_putchar('0' + mul);
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar('0' + mul);
			}
			else
			{
				_putchar('0' + mul / 10);
				_putchar('0' + mul % 10);
			}
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
