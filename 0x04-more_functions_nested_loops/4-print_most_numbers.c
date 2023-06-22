#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - Print number from 0 to 9
 * Description: This function print number from 0 to 9 excluding
 * 2 and 4.
 * Return: Void
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
		{
			putchar(num + '0');
		}
	}
	putchar('\n');
}
