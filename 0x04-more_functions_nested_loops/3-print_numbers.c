#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print number from 0 to 9
 * Description: This function print number followed by a new line.
 * Return: Void.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
}


