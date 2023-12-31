#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range -A function that  creates an array of integers.
 * @min: paramater for first integer number
 * @max: paramater for last integer number
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
