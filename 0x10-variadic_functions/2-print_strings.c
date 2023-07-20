#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints a number followed by a separator
 * @separator: String to printed between the string
 * @n: This is the number of arguments passed to function
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	int *arr = malloc(sizeof(int) * n);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) == NULL)
			arr[i] = 1;
		else
			arr[i] = 0;
	}
	va_end(ap);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (arr[i] == 1)
			printf("(nil)");
		else
			printf("%s", va_arg(ap, char *));
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	putchar('\n');
}
