#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string, followed by
 * a new line.
 * @str: Strings.
 */
void puts2(char *str)
{
	int longi = 0;
	int m;
	char *j = str;
	int o;

	while (*j != '\0')
	{
		j++;
		longi++;
	}
	m = longi;
	for (o = 0; o < m; o++)
	{
		if (o % 2 == 0)
		{
			putchar(str[o]);
		}
	}
	putchar('\n');
}
