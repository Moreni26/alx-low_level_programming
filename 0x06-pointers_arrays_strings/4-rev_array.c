#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that reverses content of sn arrays
 * @a: pointer of the array
 * @n: number of element of array
 * Retirn: None
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
