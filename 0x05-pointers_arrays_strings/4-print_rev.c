#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Strings
 */
void print_rev(char *s)
{
	int longi = 0;
	int j;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;

	for (j = longi; j > 0; j--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
