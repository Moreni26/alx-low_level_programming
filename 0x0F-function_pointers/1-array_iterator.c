#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function as a parameter on each
 * elements of an array.
 * @size: size of array
 * @action: pojnter to function
 * @array: array of integers
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
