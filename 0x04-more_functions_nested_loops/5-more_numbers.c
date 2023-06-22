#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print more number from 0 to 14
 * Description: This function print ten set of numbers from 0 to 14
 * followed by a new line.
 * Return: Void.
 */
void more_numbers(void)
{
	int num, tally;

	for (tally = 0; tally < 10; tally++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				putchar(num / 10 + '0');
			}
			putchar(num % 10 + '0');
		}
		putchar('\n');
	}
}
