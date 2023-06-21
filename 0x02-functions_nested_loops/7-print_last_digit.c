#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 * @n: The number to extract the last digit from
 * Description: This function print the last digit of a number and
 * returns the value of the last digit.
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		_putchar(l + '0');
		return (l);
	}
	_putchar('\n');
}
