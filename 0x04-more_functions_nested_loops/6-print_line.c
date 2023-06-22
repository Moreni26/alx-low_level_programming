#include "main.h"
#include <stdio.h>
/**
 * print_line - Draw a straight line
 * @n: The number of time the _ character should be printed.
 * Description: This function draw a straight line in the terminal.
 * Return: Always 0 (Success).
 */
void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			putchar('_');
		putchar('\n');
	}
}
