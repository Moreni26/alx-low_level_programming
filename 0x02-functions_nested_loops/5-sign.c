#include "main.h"
/**
 * print_sign - Determine and print the sign of a number
 * @n: The number to check
 * Description: This function takes an integer as input and prints
 * its sign
 * It prints '+' if the number is greater than zero,
 *'-' if the number is less than zero, and '0' if the number is zero
 * Return: 1 if the number is positive, -1 if negative, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
