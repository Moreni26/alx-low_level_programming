#include "main.h"
/**
 * _abs - Computes value of an integer
 * @i: The integer to compute the absolute value of
 * Description: This function computes the absolute value of an
 * integer.
 * Return: Always 0 (Success).
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (-i);
	}
	_putchar('\n');
}
