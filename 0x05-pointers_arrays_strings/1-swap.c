#include "main.h"
#include <stdio.h>
/**
 * swap_int - function that swap two integers.
 * @a: This is the first integer
 * @b: This is the second integer.
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int j = *a;

	*a = *b;
	*b = j;
}
