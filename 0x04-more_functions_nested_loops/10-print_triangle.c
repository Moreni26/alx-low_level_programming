#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Print triangle, followed by a new line.
 * @size: The size of the triangle to be printed.
 */
void print_triangle(int size)
{
	if (i <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i < size; i++)
		{
			for (j = i; j < size; j++)
			{
				putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
