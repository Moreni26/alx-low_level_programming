#include "main.h"
#include <stdio.h>
/**
 * factorial - return a factorial of given number
 * @n: number of time which the factorial is calculated
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
