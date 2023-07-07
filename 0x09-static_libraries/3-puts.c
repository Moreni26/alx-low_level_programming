#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string, followed by a new line to stdout.
 * @str: Strings
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
