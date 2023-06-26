#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints element of an array of an integers,
 * followed by a new line.
 * @a: array name
 * @n: number of the elment of array to be printed.
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < (n - 1); m++)
	{
		printf("%d, ", a[m]);
	}
	if (m == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
